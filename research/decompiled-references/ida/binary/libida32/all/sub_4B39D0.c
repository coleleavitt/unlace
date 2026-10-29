__int64 __fastcall sub_4B39D0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  char v5; // dl
  int v6; // eax
  unsigned int v7; // r12d
  unsigned int *v8; // r13
  __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v3 = a3;
  if ( a3 != -1 && !*(_QWORD *)(a1 + 768) )
  {
    v12 = 0;
    v13 = 0xFFFFFFFF00000000LL;
    v14 = 0;
    if ( (unsigned __int8)get_fixup(&v12, a2) )
    {
      v5 = BYTE4(v12);
      v6 = BYTE4(v12) & 4;
      if ( (v12 & 0x400000000LL) == 0 )
      {
        if ( (v12 & 0x100000000LL) != 0 )
        {
          v6 = v13;
        }
        else if ( HIDWORD(v13) != -1 )
        {
          v11 = sel2para(HIDWORD(v13));
          v5 = BYTE4(v12);
          v6 = 16 * v11;
        }
        v7 = v14 + v6;
        if ( (v5 & 2) != 0 )
          return v7;
        v8 = (unsigned int *)sub_4F8AE0(a1, HIDWORD(v13));
        if ( !v8 )
          return v3;
        v9 = sub_4EE820(a1 + 1552, v3);
        if ( v9 )
        {
          if ( v8[7] == *(_DWORD *)(v9 + 28) )
            return v3;
        }
        v10 = v8[1];
        if ( v10 == v3 )
          return --v3;
        if ( v7 == *v8 )
          return v7;
        if ( v3 < *v8 )
        {
          return *v8;
        }
        else if ( v3 >= v10 )
        {
          return v10 - 1;
        }
      }
    }
  }
  return v3;
}

