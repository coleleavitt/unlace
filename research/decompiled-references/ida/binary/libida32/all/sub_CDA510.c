unsigned __int64 __fastcall sub_CDA510(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 == 3 )
    return *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0LL;
  v3 = sub_CDA220(a1);
  if ( v2 || *(_QWORD *)(v3 + 40) || !*(_BYTE *)(v3 + 60) || *(_QWORD *)a1 == *(_DWORD *)(a1 + 40) )
    return sub_CCB860((__int64 *)v3);
  v5 = *(_QWORD *)(sub_CCB860((__int64 *)v3) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(unsigned __int8 *)(v5 + 16);
  if ( (unsigned __int8)(v6 - 2) > 4u
    && ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
     || (v5 = sub_F3F310(
                v5,
                a2,
                (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
                v6)) == 0) )
  {
    v7 = (__int64 *)sub_CDA220(a1);
    v5 = *(_QWORD *)(sub_CCB860(v7) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v5 + 16) != 14 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v9 + 16) != 14 || (v5 = sub_F3F310(v5, a2, v9, v8)) == 0 )
      {
        v10 = (__int64 *)sub_CDA220(a1);
        v5 = *(_QWORD *)(sub_CCB860(v10) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 57 > 1 )
        {
          v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
          if ( (unsigned int)v12 > 1 || (v5 = sub_F3F310(v5, a2, v12, v11)) == 0 )
          {
            v3 = sub_CDA220(a1);
            return sub_CCB860((__int64 *)v3);
          }
        }
      }
    }
  }
  return *(_QWORD *)(v5 + 32);
}

