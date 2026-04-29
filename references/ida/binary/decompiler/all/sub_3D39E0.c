__int64 __fastcall sub_3D39E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  _DWORD *v8; // r15
  char *v9; // r13
  __int64 v11; // rdx
  int v13; // r8d
  __int64 v14; // r11
  int v15; // r15d
  __int64 *v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // r11
  __m128i v19; // rax
  volatile signed __int32 *v20; // rdi
  __int64 result; // rax
  unsigned __int8 v23; // [rsp+0h] [rbp-78h]
  int v24; // [rsp+Ch] [rbp-6Ch]
  int v25; // [rsp+Ch] [rbp-6Ch]
  int v26; // [rsp+Ch] [rbp-6Ch]
  __m128i v27; // [rsp+10h] [rbp-68h] BYREF
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int128 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v8 = 0;
  v9 = (char *)&unk_4328C0;
  v11 = 0;
  v30 = __readfsqword(0x28u);
  v29 = 0;
  v28 = 0;
  do
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)v9;
      if ( *(_DWORD *)(a2 + 64) <= *(_DWORD *)v9 )
        break;
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v11 + 1) )
      {
        v25 = *(_DWORD *)v9;
        v28 = qvector_reserve();
        v11 = v29;
        v8 = (_DWORD *)v28;
        v13 = v25;
      }
      v8[v11] = v13;
      v9 += 4;
      v8 = (_DWORD *)v28;
      v11 = v29 + 1;
      *(_QWORD *)&v29 = v29 + 1;
      if ( "$ mbui.view_id" == v9 )
        goto LABEL_8;
    }
    if ( *(_DWORD *)(a2 + 64) < v13 )
    {
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v11 + 1) )
      {
        v26 = *(_DWORD *)v9;
        v28 = qvector_reserve();
        v11 = v29;
        v8 = (_DWORD *)v28;
        v13 = v26;
      }
      v24 = v13;
      memmove(v8 + 1, v8, 4 * v11);
      *v8 = v24;
      v8 = (_DWORD *)v28;
      v11 = v29 + 1;
      *(_QWORD *)&v29 = v29 + 1;
    }
    v9 += 4;
  }
  while ( "$ mbui.view_id" != v9 );
LABEL_8:
  while ( 2 )
  {
    if ( v11 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(a1 + 48);
        v15 = v8[v11 - 1];
        *(_QWORD *)&v29 = v11 - 1;
        v16 = (__int64 *)sub_3CA140(v14, a4);
        if ( v17 == v16 )
          break;
        while ( v15 != *(_DWORD *)(*v16 + 56) )
        {
          if ( v17 == ++v16 )
            goto LABEL_25;
        }
        sub_3D35F0(&v27, *v16, *v18, 0.0, a6, a7, a8);
        v19 = v27;
        v20 = *(volatile signed __int32 **)(a2 + 48);
        *(__m128i *)(a2 + 40) = v27;
        if ( v20 )
          goto LABEL_14;
LABEL_15:
        *(_DWORD *)(a2 + 64) = v15;
        if ( !v19.m128i_i64[0] )
          goto LABEL_27;
        result = sub_3D1A00(a1, a2, a3);
        v8 = (_DWORD *)v28;
        if ( (_BYTE)result )
          goto LABEL_19;
        v11 = v29;
        if ( !(_QWORD)v29 )
          goto LABEL_18;
      }
LABEL_25:
      v20 = *(volatile signed __int32 **)(a2 + 48);
      *(_QWORD *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 48) = 0;
      if ( !v20 )
      {
        *(_DWORD *)(a2 + 64) = v15;
LABEL_27:
        v8 = (_DWORD *)v28;
        v11 = v29;
        continue;
      }
LABEL_14:
      sub_3CB2E0(v20);
      v19.m128i_i64[0] = *(_QWORD *)(a2 + 40);
      goto LABEL_15;
    }
    break;
  }
LABEL_18:
  result = 0;
LABEL_19:
  if ( v8 )
  {
    v23 = result;
    *(_QWORD *)&v29 = 0;
    qfree();
    return v23;
  }
  return result;
}
