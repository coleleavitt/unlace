__int64 __fastcall sub_233780(__int64 a1)
{
  __int64 head; // rbp
  __int64 v3; // r9
  char *v4; // rax
  __int64 v5; // [rsp+8h] [rbp-190h] BYREF
  __int128 v6; // [rsp+10h] [rbp-188h] BYREF
  __int64 v7; // [rsp+20h] [rbp-178h]
  __int64 v8; // [rsp+28h] [rbp-170h]
  __int64 v9; // [rsp+30h] [rbp-168h]
  char v10; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v11[4]; // [rsp+178h] [rbp-20h] BYREF

  v11[0] = __readfsqword(0x28u);
  v5 = -1;
  if ( (get_flags_ex(a1, 4) & 0x600) != 0x200 )
    return v5;
  sub_1E73C0(0x3EBu, &v5, a1);
  head = v5;
  if ( v5 == -1 )
  {
    head = prev_head(a1, 0);
    if ( head == -1 )
      return v5;
    v7 = -1;
    v4 = &v10;
    v8 = 0;
    v9 = 0;
    v6 = -1;
    do
    {
      *(_WORD *)v4 = 0;
      v4 += 40;
      *((_WORD *)v4 - 19) = 0;
      *((_WORD *)v4 - 18) = 0;
      *((_DWORD *)v4 - 2) = 0;
      *((_WORD *)v4 - 17) = 0;
      *((_OWORD *)v4 - 2) = 0;
      *((_QWORD *)v4 - 2) = 0;
    }
    while ( v11 != (_QWORD *)v4 );
    if ( (int)decode_insn(&v6, head, v11, 0, 0, v3, 0.0) <= 0
      || a1 - head >= (unsigned __int64)WORD1(v8)
      || (v9 & 0x10000) == 0 )
    {
      return v5;
    }
  }
  return head;
}
