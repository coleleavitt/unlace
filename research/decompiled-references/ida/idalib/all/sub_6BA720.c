__int64 __fastcall sub_6BA720(__int64 a1, _QWORD *a2, unsigned int a3, char a4)
{
  __int64 idati; // rax
  unsigned int v8; // r8d
  __int64 v10; // rdi
  unsigned int tinfo_property; // eax
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rax
  unsigned int v15; // [rsp+Ch] [rbp-5Ch]
  unsigned int v16; // [rsp+Ch] [rbp-5Ch]
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int16 v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  idati = *(_QWORD *)(a1 + 8);
  v20 = __readfsqword(0x28u);
  v19 = 257;
  v18 = a3;
  if ( !idati )
    idati = get_idati(a1, a2);
  v17 = idati;
  if ( !(unsigned __int8)create_tinfo(a2, 61, 189, &v17) )
    return 0;
  v8 = a3;
  if ( a4 )
  {
    v10 = *a2;
    tinfo_property = get_tinfo_property(*a2, 8);
    v8 = tinfo_property;
    if ( a3 != tinfo_property )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v19 = 257;
      v18 = tinfo_property;
      if ( !v12 )
      {
        v16 = tinfo_property;
        v14 = get_idati(v10, 8);
        v8 = v16;
        v12 = v14;
      }
      v17 = v12;
      v15 = v8;
      v13 = create_tinfo(a2, 61, 189, &v17);
      v8 = v15;
      if ( !v13 )
        return 0;
    }
  }
  return v8;
}
