__int64 __fastcall sub_2DE80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // di
  int v6; // eax
  unsigned int v7; // r10d
  int v8; // r12d
  int v9; // eax
  unsigned int v10; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r14d
  __int64 v17; // [rsp+18h] [rbp-88h] BYREF
  __int64 v18; // [rsp+20h] [rbp-80h] BYREF
  __int128 v19; // [rsp+28h] [rbp-78h]
  char v20; // [rsp+38h] [rbp-68h]
  __int64 v21; // [rsp+40h] [rbp-60h] BYREF
  __int128 v22; // [rsp+48h] [rbp-58h]
  char v23; // [rsp+58h] [rbp-48h]
  unsigned __int64 v24; // [rsp+68h] [rbp-38h]

  v4 = *(_WORD *)(a2 + 24);
  v24 = __readfsqword(0x28u);
  v6 = sub_25C10(v4);
  if ( v6 == 1 )
    return 0;
  v8 = v6;
  v9 = *(unsigned __int16 *)(a3 + 6);
  if ( v9 == 161 )
    return 0;
  if ( v9 == 13 )
    return 0;
  LOBYTE(v7) = *(_BYTE *)(a3 + 32) == 13 || *(unsigned __int8 *)(a3 + 32) == 161;
  v10 = v7;
  if ( (_BYTE)v7 || (unsigned __int8)netnode_charval() == 3 )
  {
    return 0;
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 16);
    v13 = *(unsigned __int16 *)(a3 + 6);
    v18 = 0;
    v20 = 0;
    v19 = 0;
    if ( (unsigned __int8)sub_81F70(a1, &v18, v12, v13, 0, 0) )
    {
      if ( (unsigned __int8)(v20 - 10) <= 1u )
      {
        v14 = *(unsigned __int8 *)(a3 + 32);
        v21 = 0;
        v15 = *(_QWORD *)(a2 + 16);
        v23 = 0;
        v22 = 0;
        if ( (unsigned __int8)sub_81F70(a1, &v21, v15, v14, 0, 0) )
        {
          if ( (unsigned __int8)(v23 - 10) <= 1u )
          {
            v16 = sub_22880((unsigned __int64 *)&v17, (__int64)&v18, (__int64)&v21, a1);
            if ( (_BYTE)v16 )
            {
              sub_2D9A0(a1, a2, a3, 1, v17, (__int64)&v21, v8, 1);
              v10 = v16;
            }
          }
        }
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(v21);
        }
      }
    }
    else
    {
      v10 = 0;
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
  }
  return v10;
}
