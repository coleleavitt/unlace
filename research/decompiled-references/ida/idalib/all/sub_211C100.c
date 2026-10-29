__int64 __fastcall sub_211C100(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rdx
  __int64 (*v10)(); // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdx
  _QWORD v17[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v18; // [rsp+10h] [rbp-38h]
  __int64 v19; // [rsp+18h] [rbp-30h]
  __int16 v20; // [rsp+20h] [rbp-28h]

  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + 152);
  if ( *(_DWORD *)(v4 + 312) == 4 && (v6 = *(_DWORD *)(v4 + 320)) != 0 && v6 != 6 )
  {
    v7 = a1[13];
    if ( !v7 || *(_QWORD *)(v7 + 8) )
    {
      v17[0] = ".seh_ directive must appear within an active frame";
      v20 = 259;
      return sub_2100A30(v3, a2, (__int64)v17);
    }
    else
    {
      v8 = (_QWORD *)a1[35];
      if ( v8 )
      {
        if ( *(_BYTE *)(v7 + 84) <= 1u || (v9 = (_QWORD *)v8[6]) != nullptr )
        {
          v10 = *(__int64 (**)())(*a1 + 88LL);
          result = 1;
          if ( v10 != sub_2119CA0 )
            result = ((__int64 (__fastcall *)(_QWORD *))v10)(a1);
          v8[5] = result;
          a1[35] = 0;
        }
        else
        {
          v14 = *(_QWORD *)(v7 + 32);
          v15 = 0;
          if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
          {
            v16 = *(__int64 **)(v14 - 8);
            v15 = *v16;
            v9 = v16 + 3;
          }
          v18 = v9;
          v20 = 1283;
          v17[0] = "Missing .seh_unwindv2start in ";
          v19 = v15;
          return sub_2100A30(v3, a2, (__int64)v17);
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 32);
        v12 = 0;
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          v13 = *(__int64 **)(v11 - 8);
          v12 = *v13;
          v8 = v13 + 3;
        }
        v18 = v8;
        v20 = 1283;
        v17[0] = "Stray .seh_endepilogue in ";
        v19 = v12;
        return sub_2100A30(v3, a2, (__int64)v17);
      }
    }
  }
  else
  {
    v17[0] = ".seh_* directives are not supported on this target";
    v20 = 259;
    return sub_2100A30(v3, a2, (__int64)v17);
  }
  return result;
}
