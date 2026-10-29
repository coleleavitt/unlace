__int64 __fastcall sub_C76990(__int64 *a1, int *a2)
{
  __int64 *v2; // r15
  unsigned int *v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int *v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  void *v14; // rbp
  __int64 v15; // rsi
  void *v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx

  v2 = a1;
  v4 = *((unsigned int **)a2 + 9);
  if ( v4 )
  {
    a1 = (__int64 *)(*a1 + 648);
    sub_234C20(a1, v4);
  }
  v5 = v2[99];
  v6 = *a2;
  if ( v5 )
  {
    if ( v6 < *(_DWORD *)(v5 - 4) )
    {
      v7 = (unsigned int *)(v5 + 4LL * v6);
      v8 = *v7;
      if ( *v7 != -1 )
      {
        v9 = v2[100];
        *v7 = -1;
        if ( v9 )
        {
          v10 = (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
          if ( v8 == (_DWORD)v10 )
          {
LABEL_10:
            *(_DWORD *)(v9 - 4) = v10;
            v6 = *a2;
            goto LABEL_11;
          }
          v11 = 8 * v10;
        }
        else
        {
          v11 = 0x7FFFFFFF8LL;
        }
        v10 = *(_QWORD *)(v9 + v11);
        a1 = (__int64 *)v8;
        *(_QWORD *)(v9 + 8LL * v8) = v10;
        *(_DWORD *)(v5 + 4LL * *(unsigned int *)v10) = v8;
        LODWORD(v10) = *(_DWORD *)(v9 - 4) - 1;
        goto LABEL_10;
      }
    }
  }
LABEL_11:
  if ( !(unsigned __int8)sub_186AF10(a1) )
  {
    v18 = v2[91];
    if ( !v18 || (v19 = *(unsigned int *)(v18 - 4), (_DWORD)v19 == *(_DWORD *)(v18 - 8)) )
    {
      sub_2FD3F0((unsigned int **)v2 + 91);
      v18 = v2[91];
      v19 = *(unsigned int *)(v18 - 4);
    }
    *(_DWORD *)(v18 + 4 * v19) = v6;
    ++*(_DWORD *)(v18 - 4);
  }
  v12 = *((_QWORD *)a2 + 4);
  v13 = v12 + 32LL * (unsigned int)a2[2];
  while ( v13 != v12 )
  {
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v12);
    v15 = v12 + 16;
    v12 += 32;
    sub_182CBA0(v14, v15);
  }
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a2 + 10);
  sub_182CBA0(v16, a2 + 14);
  return sub_17E9C40(v2 + 1, 4 * (9 * a2[2] + (a2[1] & 0x1FFFFFFFu) + 20), a2);
}

