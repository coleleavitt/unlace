unsigned __int64 __fastcall sub_676390(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v12[3]; // [rsp+1Ch] [rbp-3Ch] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v14[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 1624);
  v12[0] = a2;
  v11 = a4;
  v10 = a5;
  v15 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 1480);
  v13 = 0;
  if ( (unsigned __int8)deserialize_tinfo(&v13, *(_QWORD *)(v7 + 8), &v11, &v10, 0, 0) )
  {
    if ( a3 == -1 )
    {
      sub_6745C0((_QWORD *)(v6 + 8), v12, &v13, 0x9Au, v8);
    }
    else
    {
      v14[1] = a3;
      v14[0] = v12[0];
      sub_675860((_QWORD *)(v6 + 56), v14, &v13, 0x9Cu, v8);
    }
  }
  clear_tinfo_t(&v13);
  return v15 - __readfsqword(0x28u);
}

