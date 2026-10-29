/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4613F0
// Address: 0x004613F0

//----- (004613F0) --------------------------------------------------------
int __userpurge sub_4613F0@<eax>(int a1@<edi>, int a2)
{
  __int64 v2; // rax
  int v3; // ebp
  bool v4; // zf
  __int64 v5; // kr00_8
  unsigned int v6; // esi
  __m128i v8[256]; // [esp+14h] [ebp-1004h] BYREF

  sub_45C810(a2, a1, a2, 0, 0);
  LODWORD(v2) = sub_45C8B0(a2, a1, a2);
  v3 = 0;
  v4 = HIDWORD(v2) == 0;
  v5 = v2;
  if ( v2 < 0 )
    return v3;
  if ( SHIDWORD(v2) <= 0 )
  {
    if ( !(_DWORD)v2 )
      return v3;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v6 = v4 && (unsigned int)v5 < 0x1000 ? v5 : 4096;
    if ( sub_45C7E0(a2, v8, v6) != v6 )
      return -1;
    v3 = sub_4622B0(v3, v8[0].m128i_i8, v6);
    v5 -= v6;
    v4 = HIDWORD(v5) == 0;
    if ( SHIDWORD(v5) <= 0 )
    {
      if ( v5 <= 0 )
        return v3;
LABEL_4:
      v4 = HIDWORD(v5) == 0;
      continue;
    }
  }
}
// 46142F: variable 'v2' is possibly undefined
