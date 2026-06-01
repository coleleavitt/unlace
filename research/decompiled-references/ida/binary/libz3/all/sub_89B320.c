__int64 __fastcall sub_89B320(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 *v5; // r12
  __int64 v6; // rax
  void *v7; // rbp
  _DWORD *v10; // rdx
  unsigned int *v11; // r14
  _DWORD *v12; // rdx
  unsigned int *v13; // r14
  unsigned int *v14; // [rsp+8h] [rbp-70h]
  unsigned int *v15; // [rsp+8h] [rbp-70h]
  char v16; // [rsp+1Eh] [rbp-5Ah] BYREF
  char v17; // [rsp+1Fh] [rbp-59h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v19[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  v5 = *(__int64 **)(*(_QWORD *)(a1 + 32) + 8LL * a3);
  v18[0] = 0;
  v19[0] = 1;
  v18[1] = 0;
  v6 = *v5;
  v19[1] = 0;
  if ( !*(_WORD *)(v6 + 4) )
  {
    if ( a2 )
    {
      do
      {
        v12 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
        if ( !v12 || *v12 != 5 || v12[1] != 6 || *(_DWORD *)(v6 + 24) != 2 )
          break;
        v11 = *(unsigned int **)(v6 + 40);
        v14 = *(unsigned int **)(v6 + 32);
        if ( (unsigned __int8)sub_1666AE0(a1 + 112, v14, v18, &v16) )
        {
          v5 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v11);
        }
        else if ( (unsigned __int8)sub_1666AE0(a1 + 112, v11, v18, &v17) )
        {
          v5 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v14);
        }
        v4 = sub_B39350(v5, *(unsigned int *)(a1 + 8));
        if ( v4 == -1 )
        {
LABEL_27:
          v4 = -1;
          break;
        }
        sub_2FC4A0((__int64)qword_1C7F2C0, a4, (__int64)v18, a4);
        v6 = *v5;
      }
      while ( !*(_WORD *)(*v5 + 4) );
    }
    else
    {
      do
      {
        v10 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
        if ( !v10 || *v10 != 5 || v10[1] != 6 || *(_DWORD *)(v6 + 24) != 2 )
          break;
        v13 = *(unsigned int **)(v6 + 40);
        v15 = *(unsigned int **)(v6 + 32);
        if ( (unsigned __int8)sub_1666AE0(a1 + 112, v15, v18, &v16) )
        {
          v5 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v13);
        }
        else if ( (unsigned __int8)sub_1666AE0(a1 + 112, v13, v18, &v17) )
        {
          v5 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v15);
        }
        v4 = sub_B39350(v5, *(unsigned int *)(a1 + 8));
        if ( v4 == -1 )
          goto LABEL_27;
        sub_89ABF0((__int64)qword_1C7F2C0, a4, (__int64)v18, a4);
        v6 = *v5;
      }
      while ( !*(_WORD *)(*v5 + 4) );
    }
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  sub_182CBA0(v7, v19);
  return v4;
}

