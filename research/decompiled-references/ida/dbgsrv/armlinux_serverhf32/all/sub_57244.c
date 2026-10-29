/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57244
// Address: 0x00057244

//----- (00057244) --------------------------------------------------------
int __fastcall sub_57244(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  int (__fastcall *v6)(int, int *, _DWORD); // r3
  int v7; // r9
  int v8; // r4
  __int64 v10; // r2
  int (__fastcall *v11)(int, int, int, int *, _DWORD); // r6
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // [sp+8h] [bp-24h] BYREF
  __int64 ptr; // [sp+10h] [bp-1Ch]
  int v17; // [sp+18h] [bp-14h]
  int v18; // [sp+1Ch] [bp-10h]

  v4 = sub_570D8();
  v5 = v4;
  v6 = *(int (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)v4 + 244);
  if ( *(_DWORD *)(a1 + 36) )
  {
    v7 = v6(v4, *(int **)(a1 + 32), 0);
    if ( v7 < 0 )
      goto LABEL_3;
  }
  else
  {
    v7 = v6(v4, &dword_8DA5C, 0);
    if ( v7 < 0 )
    {
LABEL_3:
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(30055);
    }
  }
  v8 = sub_46404(a1);
  if ( !v8 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v17 = 0;
    v18 = 0;
    v15 = -2;
    ptr = v10;
    v11 = *(int (__fastcall **)(int, int, int, int *, _DWORD))(*(_DWORD *)v5 + 116);
    v12 = sub_570E4();
    v13 = v11(v5, v12, v7, &v15, 0);
    v14 = v15;
    *(_DWORD *)(a2 + 8) = v13;
    if ( v14 >= -1 )
    {
      if ( (_DWORD)ptr )
      {
        HIDWORD(ptr) = 0;
        sub_77E08((void *)ptr);
      }
    }
  }
  return v8;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
