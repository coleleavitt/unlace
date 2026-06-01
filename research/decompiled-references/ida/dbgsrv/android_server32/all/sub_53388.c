/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53388
// Address: 0x00053388

//----- (00053388) --------------------------------------------------------
int __fastcall sub_53388(int a1, int a2)
{
  int *v4; // r7
  int v5; // r2
  int v6; // r1
  int (__fastcall *v7)(int, _DWORD); // r6
  int v8; // r0
  char v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r5
  int v13; // r0
  int qerrno; // r0
  int (__fastcall *v15)(int, int); // r3
  int v17; // [sp+8h] [bp-8h]
  int v18; // [sp+Ch] [bp-4h]

  v4 = (int *)(a1 + 444);
  v5 = *(_DWORD *)(a1 + 444);
  switch ( *(_WORD *)(v5 + 12) )
  {
    case 2:
      v7 = *(int (__fastcall **)(int, _DWORD))(a1 + 72);
      if ( v7 )
        goto LABEL_6;
      if ( *(_DWORD *)(a1 + 76) )
      {
LABEL_18:
        v15 = *(int (__fastcall **)(int, int))(a1 + 76);
        if ( v15 )
        {
          *(_DWORD *)(a1 + 456) = 0;
          *(_BYTE *)(a1 + 452) = 0;
          if ( !v15(a1, a1 + 452) )
          {
            *(_BYTE *)(a1 + 448) = 1;
            *(_DWORD *)(a2 + 8) = 0;
            *(_DWORD *)(a2 + 12) = 0;
            *(_BYTE *)a2 = 1;
            return _stack_chk_guard - v18;
          }
        }
LABEL_23:
        sub_52FF6(a1);
      }
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
      *(_BYTE *)a2 = 1;
      goto LABEL_12;
    case 3:
    case 5:
      v6 = *(_DWORD *)(v5 + 16);
      *(_BYTE *)a2 = *(_BYTE *)(v5 + 20);
      *(_QWORD *)(a2 + 8) = v6;
      goto LABEL_12;
    case 8:
      v9 = *(_BYTE *)(v5 + 20);
      v10 = *(_DWORD *)(v5 + 24);
      v11 = *(_DWORD *)(v5 + 28);
      *(_DWORD *)(a2 + 8) = v10;
      *(_DWORD *)(a2 + 12) = v11;
      *(_BYTE *)a2 = v9;
      goto LABEL_12;
    case 0x28:
      sub_53000(a1, a2);
      return _stack_chk_guard - v18;
    default:
      v7 = *(int (__fastcall **)(int, _DWORD))(a1 + 72);
      if ( !v7 )
        goto LABEL_18;
LABEL_6:
      v8 = v7(a1, *(_DWORD *)(a1 + 100));
      if ( v8 )
      {
        if ( v8 != 34 )
          goto LABEL_23;
        *(_BYTE *)(a1 + 448) = 1;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 12) = 0;
        *(_BYTE *)a2 = 1;
      }
      else
      {
        *(_BYTE *)a2 = 0;
        *(_QWORD *)(a2 + 8) = v17;
LABEL_12:
        v12 = *v4;
        v13 = sub_51A0C(a1, *v4, 0, nullptr);
        if ( !v13 && *(_DWORD *)(a1 + 32) )
          v13 = sub_52528((char **)a1, v12);
        if ( v13 )
        {
          qerrno = get_qerrno();
          longjmp((struct __jmp_buf_tag *)(a1 + 188), qerrno);
        }
      }
      return _stack_chk_guard - v18;
  }
}
// 5343E: variable 'v17' is possibly undefined
// 534B4: variable 'v18' is possibly undefined
