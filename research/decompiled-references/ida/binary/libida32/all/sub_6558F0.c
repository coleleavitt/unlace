__int64 __fastcall sub_6558F0(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int8 a4,
        double a5,
        __m128i a6,
        __m128i a7)
{
  unsigned int v7; // r13d
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24[2]; // [rsp+0h] [rbp-58h] BYREF
  int v25[2]; // [rsp+8h] [rbp-50h] BYREF
  int v26[4]; // [rsp+10h] [rbp-48h]
  char v27; // [rsp+20h] [rbp-38h]
  __int16 v28; // [rsp+21h] [rbp-37h] BYREF
  int v29[2]; // [rsp+28h] [rbp-30h]

  *(_QWORD *)v29 = __readfsqword(0x28u);
  v7 = (unsigned __int8)a2 & 1;
  if ( ((unsigned __int8)a2 & 1) != 0 )
  {
    return (unsigned int)-6;
  }
  else if ( (_DWORD)a2 )
  {
    if ( !(unsigned __int8)sub_4F8ED0(a1) )
    {
      ++*(_DWORD *)(a1 + 792);
      v11 = *(_BYTE *)(a1 + 2752);
      *(_BYTE *)(a1 + 2752) = 1;
      *(_QWORD *)v24 = a1;
      *(_QWORD *)v25 = 0;
      v27 = 1;
      v28 = v11;
      *(_OWORD *)v26 = 0;
      sub_6633D0(a1);
      sub_5AF050(*(_QWORD *)a1, a2, v12, v13);
      if ( (unsigned int)sub_4EC8E0(a1 + 1552) )
        sub_655240((__int64 *)a1, (unsigned int)a2, a3, (char *)&v28 + 1, (unsigned int **)v25, a4, 0.0, a6, a7);
      sub_652150((__int64)v24, (int)a2, v14, v15, v16, v17);
    }
    sub_6510B0((__int64 *)a1, 0, (unsigned int)a2, 0xFFFFFFFF);
    v18 = *(_QWORD *)a1;
    v23 = sub_614FB0(*(_QWORD *)a1, 93, v19, v20, v21, v22);
    if ( v23 != -1 )
      sub_615AB0(v18, 93, (unsigned int)((_DWORD)a2 + v23));
  }
  return v7;
}

