/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C1F30
// Address: 0x080C1F30

//----- (080C1F30) --------------------------------------------------------
int __cdecl sub_80C1F30(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  _DWORD *v4; // edx
  int result; // eax
  char v6; // [esp+1Bh] [ebp-2Dh]
  int v7; // [esp+1Ch] [ebp-2Ch] BYREF
  int v8; // [esp+20h] [ebp-28h]
  int v9; // [esp+24h] [ebp-24h]
  unsigned int v10; // [esp+28h] [ebp-20h]

  v10 = __readgsdword(0x14u);
  if ( (dword_811F8A4 & 0x100000) != 0 )
    sub_80BE360();
  if ( sub_80D3B90(a2, "OpenSSL %d.%d.%d%c", (int)&v7) == 4 )
  {
    v3 = v6 | (v9 << 8) | (v8 << 16) | (v7 << 24);
    if ( v3 >= a3 )
    {
      if ( v3 > 0x100FFFF )
      {
        v4 = (_DWORD *)operator new(0x10Cu);
        memset(v4, 0, 0x10Cu);
        *v4 = &off_811C7A8;
LABEL_7:
        *a1 = v4;
        result = 1;
        v4[46] = v3;
        goto LABEL_11;
      }
LABEL_17:
      v4 = (_DWORD *)operator new(0xD4u);
      memset(v4, 0, 0xD4u);
      *v4 = &off_811C740;
      goto LABEL_7;
    }
  }
  else if ( sub_80D3B90(a2, "LibreSSL %d.%d.%d", (int)&v7) == 3 && v7 == 2 && (unsigned int)(v8 - 2) <= 3 )
  {
    if ( (dword_811F8A4 & 0x100000) != 0 )
      sub_80BE360();
    v3 = 16777575;
    if ( a3 <= 0x1000167 )
      goto LABEL_17;
  }
  result = 0;
LABEL_11:
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80C1FB6: variable 'v6' is possibly undefined
// 811C740: using guessed type int (*off_811C740)();
// 811C7A8: using guessed type int (*off_811C7A8)();
// 811F8A4: using guessed type int dword_811F8A4;
