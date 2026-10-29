__int64 __fastcall sub_787C40(__int64 a1, int a2, const void *a3, size_t a4)
{
  void *v6; // r13
  __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  size_t v11; // rdx
  char *v12; // rdi
  unsigned int v13; // ebx
  size_t v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v6 = qword_2CD4690;
  qmutex_lock(qword_2CD4690);
  v7 = (__int64 *)sub_78C130();
  v8 = sub_78D1E0(v7, a1);
  if ( v8 == -1 )
  {
    v13 = 0;
    goto LABEL_5;
  }
  v9 = *v7;
  v18 = 0;
  v10 = *(_QWORD *)(v9 + 8 * v8);
  v11 = *(_QWORD *)(v10 + 40);
  v12 = *(char **)(v10 + 32);
  if ( a4 >= v11 )
  {
    if ( v11 >= a4 )
      goto LABEL_4;
    v15 = *(_QWORD *)(v10 + 48);
    if ( &v18 < v12 || &v18 >= &v12[v15] )
    {
      if ( v15 >= a4
        || (v16 = qvector_reserve(v10 + 32, *(_QWORD *)(v10 + 32), a4, 1),
            v11 = *(_QWORD *)(v10 + 40),
            *(_QWORD *)(v10 + 32) = v16,
            v12 = (char *)v16,
            v11 < a4) )
      {
        do
        {
          v12[v11++] = 0;
          v12 = *(char **)(v10 + 32);
        }
        while ( a4 != v11 );
      }
    }
    else if ( v15 >= a4
           || (v17 = qvector_reserve(v10 + 32, *(_QWORD *)(v10 + 32), a4, 1),
               v11 = *(_QWORD *)(v10 + 40),
               *(_QWORD *)(v10 + 32) = v17,
               v12 = (char *)v17,
               v11 < a4) )
    {
      do
      {
        v12[v11++] = 0;
        v12 = *(char **)(v10 + 32);
      }
      while ( a4 != v11 );
    }
  }
  *(_QWORD *)(v10 + 40) = a4;
LABEL_4:
  memcpy(v12, a3, a4);
  sub_78C780(v10 + 32);
  *(_DWORD *)(v10 + 24) = a2;
  v13 = 1;
  *(_DWORD *)(v10 + 136) = 0;
LABEL_5:
  qmutex_unlock(v6);
  return v13;
}
