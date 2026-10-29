__int64 __fastcall sub_B7CB40(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  void *v7; // rbp
  _DWORD *v10; // rdx
  unsigned int *v11; // rbx
  unsigned int *v12; // r15
  _DWORD *v13; // rdx
  unsigned int *v14; // rbx
  unsigned int *v15; // r15
  __int64 v16; // [rsp+0h] [rbp-78h]
  void *v17; // [rsp+8h] [rbp-70h]
  char v18; // [rsp+1Eh] [rbp-5Ah] BYREF
  char v19; // [rsp+1Fh] [rbp-59h] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * a3);
  v20[0] = 0;
  v21[0] = 1;
  v20[1] = 0;
  v6 = *(_QWORD *)v5;
  v21[1] = 0;
  if ( !*(_WORD *)(v6 + 4) )
  {
    v16 = a1 + 872;
    if ( a2 )
    {
      do
      {
        v10 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
        if ( !v10 || *v10 != 5 || v10[1] != 6 || *(_DWORD *)(v6 + 24) != 2 )
          break;
        v14 = *(unsigned int **)(v6 + 32);
        v15 = *(unsigned int **)(v6 + 40);
        if ( (unsigned __int8)sub_1666AE0(v16, v14, v20, &v18) )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v15);
        }
        else if ( (unsigned __int8)sub_1666AE0(v16, v15, v20, &v19) )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v14);
        }
        v4 = sub_B39350(v5, *(_DWORD *)(a1 + 8));
        if ( v4 == -1 )
          goto LABEL_33;
        sub_2FC4A0((__int64)qword_1C7F2C0, a4, (__int64)v20, a4);
        v6 = *(_QWORD *)v5;
      }
      while ( !*(_WORD *)(*(_QWORD *)v5 + 4LL) );
    }
    else
    {
      do
      {
        v13 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
        if ( !v13 || *v13 != 5 || v13[1] != 6 || *(_DWORD *)(v6 + 24) != 2 )
          break;
        v11 = *(unsigned int **)(v6 + 32);
        v12 = *(unsigned int **)(v6 + 40);
        if ( (unsigned __int8)sub_1666AE0(v16, v11, v20, &v18) )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v12);
        }
        else if ( (unsigned __int8)sub_1666AE0(v16, v12, v20, &v19) )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v11);
        }
        v4 = sub_B39350(v5, *(_DWORD *)(a1 + 8));
        if ( v4 == -1 )
        {
LABEL_33:
          v4 = -1;
          break;
        }
        if ( (*(_BYTE *)(a4 + 20) & 1) != 0
          || *(_DWORD *)(a4 + 16) != 1
          || (v21[0] & 0x100000000LL) != 0
          || LODWORD(v21[0]) != 1 )
        {
          sub_1852000(qword_1C7F2C0, a4, v20);
        }
        else
        {
          v17 = qword_1C7F2C0;
          sub_1832A70(qword_1C7F2C0, a4, v20);
          sub_182CBA0(v17, a4 + 16);
          *(_BYTE *)(a4 + 20) &= ~1u;
          *(_DWORD *)(a4 + 16) = 1;
        }
        v6 = *(_QWORD *)v5;
      }
      while ( !*(_WORD *)(*(_QWORD *)v5 + 4LL) );
    }
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v20);
  sub_182CBA0(v7, v21);
  return v4;
}

