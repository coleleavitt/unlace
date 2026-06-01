/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B02F0
// Address: 0x00000000000B02F0

//----- (00000000000B02F0) ----------------------------------------------------
char __fastcall sub_B02F0(__int64 a1, unsigned int a2)
{
  char *v2; // rbx
  unsigned __int64 v3; // rbp
  int v4; // ecx
  int v5; // ecx
  __int128 v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  if ( a2 > 0x147 || (v2 = byte_1154B0, *(unsigned __int16 *)&byte_1154B0[5 * a2] != 0xFFFF) )
  {
    if ( !(_BYTE)under_debugger )
      interr(1473);
    BUG();
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = v3;
    if ( *(unsigned __int16 *)v2 != 0xFFFF )
      v4 = *(unsigned __int16 *)v2;
    if ( v4 != a2 )
      goto LABEL_9;
    v7 = 0;
    if ( (int)v3 <= 0 )
      return 0;
    v5 = HIDWORD(qword_114A70[v3]);
    *(_QWORD *)&v7 = LODWORD(qword_114A70[v3]);
    *((_QWORD *)&v7 + 1) = (unsigned int)(v5 + 1);
    rangeset_t_add(a1, (unsigned __int64 *)&v7);
LABEL_9:
    ++v3;
    v2 += 5;
    if ( v3 >= 0x148 )
      return 1;
  }
}
// 114A70: using guessed type __int64 qword_114A70[];
// 158B40: using guessed type __int64 under_debugger;
