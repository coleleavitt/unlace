__int64 __fastcall sub_F1CF80(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int128 v11; // [rsp+10h] [rbp-38h]
  __int128 v12; // [rsp+20h] [rbp-28h]

  if ( *(_QWORD *)(a2 + 32) )
  {
    v10 = *(_QWORD *)(a2 + 32);
    v11 = 0u;
    v12 = (__int128)_mm_loadh_ps((const double *)&v10);
    v2 = j__strlen(&byte_22CD811);
    sub_F1B570(a1, (__int64)&byte_22CD811, v2, v3, v4, v5, v11, v12);
  }
  v6 = sub_F3A6F0(a2);
  sub_F0B870(a1, v6);
  result = *(unsigned __int16 *)(a2 + 22);
  v8 = *(_WORD *)(a2 + 22) & 0x7FFF;
  if ( (*(_WORD *)(a2 + 22) & 0x7FFF) == 0 )
  {
    if ( *(char *)(a2 + 21) >= 0 )
      return result;
    return sub_971800(*(_QWORD *)(a1 + 1096), " final");
  }
  v9 = sub_971800(*(_QWORD *)(a1 + 1096), " pack_index ");
  result = sub_2257BD0(v9, (unsigned int)(v8 - 1));
  if ( *(char *)(a2 + 21) < 0 )
    return sub_971800(*(_QWORD *)(a1 + 1096), " final");
  return result;
}

