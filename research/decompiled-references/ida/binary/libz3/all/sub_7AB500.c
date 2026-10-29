__int64 __fastcall sub_7AB500(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 result; // rax
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int32 v9; // r13d
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int128 v14; // xmm0
  __int64 v15; // rax
  int v16; // edx
  __m128i v17; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int128 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int128 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp-38h]

  v3 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 472LL))(
         *(_QWORD *)(a1 + 80),
         *(_QWORD *)(a2 + 8),
         0,
         0);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL);
  if ( *(_DWORD *)(result + 4 * v3) != 1 )
  {
    v5 = *(_DWORD *)(a1 + 424);
    v6 = sub_7E4EC0(a1);
    v7 = sub_180C100(v6, 12);
    v8 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(v7 + 8) = v5;
    *(_QWORD *)v7 = a1;
    v9 = *(_DWORD *)(v8 + 3612);
    v17.m128i_i64[1] = v7;
    v17.m128i_i32[0] = v9;
    LODWORD(v18) = 3;
    sub_7AAA90(a1, v3, (__int64)&v17);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = (__int128)_mm_load_si128(&v17);
    v15 = *(_QWORD *)(v13 + 3288);
    v19 = v14;
    v20 = v18;
    result = *(unsigned int *)(v15 + 4 * v3);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 1 )
      {
        v22 = v18;
        v21 = v14;
        if ( !v9 && !*(_BYTE *)(v13 + 3832) )
        {
          result = *(_QWORD *)(v13 + 3296) + 24LL * ((unsigned int)v3 >> 1);
          if ( *(_DWORD *)result )
          {
            v16 = v22;
            *(_OWORD *)result = v14;
            *(_DWORD *)(result + 16) = v16;
          }
        }
        goto LABEL_5;
      }
      if ( (_DWORD)result != -1 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 480);
        return result;
      }
      result = sub_11B4C90(v13, (unsigned int)v3 ^ 1, v18, v10, v11, v12, v14, v18);
      ++*(_DWORD *)(a1 + 480);
    }
    else
    {
      result = sub_11C3360(v13, v3, v18, v10, v11, v12, v14, v18);
      ++*(_DWORD *)(a1 + 480);
    }
  }
  return result;
}

