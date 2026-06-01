unsigned __int64 __fastcall sub_4D6E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  __int64 i; // rbx
  __int64 v5; // rdx
  size_t v6; // rax
  _BYTE v8[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v9[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v9[0] = __readfsqword(0x28u);
  v3 = sub_93A50(v8, v9, (unsigned int)v2) - (_QWORD)v8;
  if ( v3 )
    sub_3DC50(a2, v8, v3);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = 9 * i;
      sub_4D5C0(*(_QWORD *)(a1 + 16) + 8 * v5, a2);
    }
  }
  v6 = sub_93A50(v8, v9, *(unsigned int *)(a1 + 40)) - (_QWORD)v8;
  if ( v6 )
    sub_3DC50(a2, v8, v6);
  return v9[0] - __readfsqword(0x28u);
}

