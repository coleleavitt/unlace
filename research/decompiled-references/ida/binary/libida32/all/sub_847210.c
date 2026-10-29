int __fastcall sub_847210(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx

  pthread_mutex_lock(&mutex);
  v2 = *(a1 - 2);
  v3 = a1 - 2;
  v4 = (__int64 *)((char *)a1 - *(a1 - 1) - 16);
  v5 = qword_2CAD0C0 - v2;
  v6 = *v4 == 0;
  qword_2CAD0C0 -= v2;
  if ( v6 )
  {
    v11 = v4[4] + v2;
    v3 = v4;
    v4[4] = v11;
    *(__int64 *)((char *)v4 + v11 + 8) = v11;
    v8 = v4[4];
    v9 = (__int64 *)((char *)v3 + v8);
    if ( *(__int64 *)((char *)v3 + v8) )
      goto LABEL_5;
  }
  else
  {
    a1[2] = v2;
    v7 = qword_2CAD0C8;
    *(a1 - 2) = 0;
    *a1 = v7;
    a1[1] = 0;
    if ( v7 )
      *(_QWORD *)(v7 + 24) = v3;
    v8 = v3[4];
    qword_2CAD0C8 = (__int64)(a1 - 2);
    v9 = (__int64 *)((char *)v3 + v8);
    if ( *(__int64 *)((char *)v3 + v8) )
    {
LABEL_5:
      if ( v3[1] )
        return pthread_mutex_unlock(&mutex);
      goto LABEL_13;
    }
  }
  v3[4] = v9[4] + v8;
  v12 = v9[2];
  if ( v12 )
  {
    *(_QWORD *)(v12 + 24) = v9[3];
    v12 = v9[2];
  }
  v13 = v9[3];
  if ( v13 )
    *(_QWORD *)(v13 + 16) = v12;
  else
    qword_2CAD0C8 = v12;
  v14 = v3[4];
  v9 = (__int64 *)((char *)v3 + v14);
  *(__int64 *)((char *)v3 + v14 + 8) = v14;
  if ( !v3[1] )
  {
LABEL_13:
    if ( *v9 == 1 && (unsigned __int64)(3 * v5) >> 1 < qword_2CAD0B8 - v3[4] )
    {
      v15 = v3[2];
      qword_2CAD0B8 -= v3[4];
      if ( v15 )
      {
        *(_QWORD *)(v15 + 24) = v3[3];
        v15 = v3[2];
      }
      v16 = v3[3];
      if ( v16 )
        *(_QWORD *)(v16 + 16) = v15;
      else
        qword_2CAD0C8 = v15;
      munmap(v3, v3[4] + 16);
    }
  }
  return pthread_mutex_unlock(&mutex);
}

