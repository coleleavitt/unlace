/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53000
// Address: 0x00053000

//----- (00053000) --------------------------------------------------------
int __fastcall sub_53000(int a1, int a2)
{
  int v4; // r1
  _DWORD *v5; // r4
  int v6; // r6
  int v7; // r0
  int qerrno; // r0
  int v9; // r6
  unsigned __int64 v10; // r0
  int result; // r0
  int v12; // [sp+8h] [bp-2Ch]
  unsigned int v13; // [sp+10h] [bp-24h]
  char v14; // [sp+14h] [bp-20h]
  int v15; // [sp+28h] [bp-Ch]
  int v16; // [sp+30h] [bp-4h]

  v4 = *(_DWORD *)(a1 + 180) + 1;
  *(_DWORD *)(a1 + 180) = v4;
  v5 = (_DWORD *)(a1 + 180);
  if ( v4 >= 1024 )
    longjmp((struct __jmp_buf_tag *)(a1 + 188), 54);
  v15 = a2;
  sub_53128(a1, a2, 1);
  v6 = *(_DWORD *)(a1 + 444);
  if ( *(_WORD *)(v6 + 12) != 41 )
    sub_52FF6(a1);
  v7 = sub_51A0C(a1, *(_DWORD *)(a1 + 444), 0, nullptr);
  if ( !v7 && *(_DWORD *)(a1 + 32) )
    v7 = sub_52528((char **)a1, v6);
  if ( v7 )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 188), qerrno);
  }
  if ( *(_BYTE *)(a1 + 448) )
  {
    *(_BYTE *)(a1 + 448) = 0;
    v16 = *(_DWORD *)(a1 + 456);
    v9 = *(_DWORD *)(a1 + 452);
    sub_53220(a1, v15, 0);
    *(_BYTE *)v15 = v9;
    v14 = 64 - 8 * v16;
    v13 = *(_DWORD *)(v15 + 12);
    *(_DWORD *)(v15 + 12) = (0xFFFFFFFFFFFFFFFFLL >> v14 >> 32) & v13;
    v12 = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = (0xFFFFFFFFFFFFFFFFLL >> v14) & v12;
    v10 = 0x8000000000000000LL >> v14;
    if ( !(v9 << 24)
      && (unsigned int)(0xFFFFFFFFFFFFFFFFLL >> v14) & v12 & (unsigned int)(0x8000000000000000LL >> v14)
       | (0xFFFFFFFFFFFFFFFFLL >> v14 >> 32) & v13 & (0x8000000000000000LL >> v14 >> 32) )
    {
      *(_DWORD *)(v15 + 8) = v12 | ~(unsigned int)(0xFFFFFFFFFFFFFFFFLL >> v14) | v10;
      *(_DWORD *)(v15 + 12) = v13 | ~(0xFFFFFFFFFFFFFFFFLL >> v14 >> 32) | HIDWORD(v10);
    }
    *(_DWORD *)(a1 + 452) = v9;
    *(_DWORD *)(a1 + 456) = v16;
  }
  result = *v5 - 1;
  *v5 = result;
  return result;
}
