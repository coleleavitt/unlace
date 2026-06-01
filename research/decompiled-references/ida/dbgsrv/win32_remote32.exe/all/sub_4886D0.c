/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4886D0
// Address: 0x004886D0

//----- (004886D0) --------------------------------------------------------
void sub_4886D0()
{
  int (**v0)(void); // edi
  int v1; // esi

  v0 = (int (**)(void))dword_4B5D80;
  if ( dword_4B5D80 != -1 )
  {
    (*(void (__cdecl **)(_DWORD))(dword_4B5D80 + 4))(*(_DWORD *)dword_4B5D80);
    v1 = *(_DWORD *)v0[3]();
    sub_46C918(v0);
    *sub_46B984() = v1;
    dword_4B5D80 = -1;
  }
  if ( dword_4B5D74 )
  {
    dword_4B5D78 = 0;
    sub_453A20((void *)dword_4B5D74);
    dword_4B5D74 = 0;
    dword_4B5D7C = 0;
  }
  if ( dword_4B5D68 )
  {
    dword_4B5D6C = 0;
    sub_453A20((void *)dword_4B5D68);
    dword_4B5D68 = 0;
    dword_4B5D70 = 0;
  }
}
// 4B5D68: using guessed type int dword_4B5D68;
// 4B5D6C: using guessed type int dword_4B5D6C;
// 4B5D70: using guessed type int dword_4B5D70;
// 4B5D74: using guessed type int dword_4B5D74;
// 4B5D78: using guessed type int dword_4B5D78;
// 4B5D7C: using guessed type int dword_4B5D7C;
// 4B5D80: using guessed type int dword_4B5D80;

// nfuncs=2499 queued=2457 decompiled=2457 lumina nreq=0 worse=0 better=0
#error "There were 14 decompilation failure(s) on 2457 function(s)"
