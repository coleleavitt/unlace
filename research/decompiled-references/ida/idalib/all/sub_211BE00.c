__int64 __fastcall sub_211BE00(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 (*v13)(); // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdx
  _QWORD v17[2]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v18; // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  __int16 v20; // [rsp+20h] [rbp-18h]

  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + 152);
  if ( *(_DWORD *)(v4 + 312) == 4 && (v6 = *(_DWORD *)(v4 + 320)) != 0 && v6 != 6 )
  {
    v7 = a1[13];
    if ( !v7 || (v8 = *(_QWORD **)(v7 + 8)) != nullptr )
    {
      v17[0] = ".seh_ directive must appear within an active frame";
      v20 = 259;
      return sub_2100A30(v3, a2, (__int64)v17);
    }
    else
    {
      v9 = (_QWORD *)a1[35];
      if ( v9 )
      {
        if ( v9[6] )
        {
          v10 = *(_QWORD *)(v7 + 32);
          v11 = 0;
          if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
          {
            v12 = *(__int64 **)(v10 - 8);
            v11 = *v12;
            v8 = v12 + 3;
          }
          v19 = v11;
          v20 = 1283;
          v17[0] = "Duplicate .seh_unwindv2start in ";
          v18 = v8;
          return sub_2100A30(v3, a2, (__int64)v17);
        }
        else
        {
          v13 = *(__int64 (**)())(*a1 + 88LL);
          result = 1;
          if ( v13 != sub_2119CA0 )
          {
            result = ((__int64 (__fastcall *)(_QWORD *))v13)(a1);
            v9 = (_QWORD *)a1[35];
          }
          v9[6] = result;
        }
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
        v17[0] = "Stray .seh_unwindv2start in ";
        v20 = 1283;
        v19 = v15;
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
