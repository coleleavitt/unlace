_DWORD *__fastcall sub_5185C0(_QWORD *a1, unsigned int a2)
{
  _DWORD **v4; // rax
  bool *v5; // r9
  _DWORD *v6; // r13
  __int64 v7; // rax
  __int32 v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int *v13; // rax
  unsigned int v14; // eax
  _DWORD *v15; // rax
  int v16; // eax
  unsigned int v17; // r12d
  _QWORD *v18; // rbx
  _BYTE *v19; // rax
  _DWORD *v20; // rax
  _DWORD *v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // r12
  int *v31; // rax
  int *v32; // rsi
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // [rsp+0h] [rbp-98h]
  int v36; // [rsp+8h] [rbp-90h]
  int v37; // [rsp+Ch] [rbp-8Ch]
  int v38; // [rsp+10h] [rbp-88h]
  __int64 *v39; // [rsp+18h] [rbp-80h]
  __int64 v40; // [rsp+20h] [rbp-78h]
  int v41; // [rsp+28h] [rbp-70h]
  int v42; // [rsp+2Ch] [rbp-6Ch]
  __m128i v43; // [rsp+30h] [rbp-68h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v45; // [rsp+48h] [rbp-50h]
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return nullptr;
  v4 = sub_516630((__int64)a1, a2);
  if ( v4 == (_DWORD **)(a1[1] + 8LL * a1[2]) || (v6 = *v4, a2 != **v4) )
  {
    if ( v5 )
      *v5 = 0;
    goto LABEL_6;
  }
  if ( v5 )
    *v5 = v6 != nullptr;
  if ( !v6 )
  {
LABEL_6:
    v7 = *a1;
    ptr = nullptr;
    v45 = 0;
    v39 = *(__int64 **)(v7 + 1480);
    v8 = sub_3B90A0(v39, a2);
    v9 = *a1;
    v43.m128i_i32[0] = v8;
    if ( sub_79BAE0(&v43, v9, &ptr, 1, 0, 77) <= 0 )
    {
      v6 = nullptr;
LABEL_19:
      if ( ptr )
      {
        *(_QWORD *)&v45 = 0;
        qfree(ptr);
      }
      return v6;
    }
    v10 = *a1;
    v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v45));
    v36 = sub_6180E0(v10);
    v41 = dword_2CA24C8 & 0x20;
    if ( (dword_2CA24C8 & 0x20) != 0 )
    {
      v13 = (unsigned int *)v43.m128i_i64[0];
      if ( v43.m128i_i64[1] >= (unsigned __int64)(v43.m128i_i64[0] + 4) )
      {
        v43.m128i_i64[0] += 4;
        v14 = *v13;
        HIDWORD(v35) = v14;
        if ( v14 )
        {
          v30 = v14;
          v40 = qcalloc(v14, 20);
          if ( !v40 )
            sub_3B74D0((int)"get_struct");
          v31 = (int *)v43.m128i_i64[0];
          v32 = (int *)(v43.m128i_i64[0] + 20 * v30);
          v33 = v40;
          do
          {
            v34 = *v31;
            v31 += 5;
            v33 += 20;
            *(_DWORD *)(v33 - 20) = v34;
            *(_DWORD *)(v33 - 16) = *(v31 - 4);
            *(_DWORD *)(v33 - 12) = *(v31 - 3);
            *(_DWORD *)(v33 - 8) = *(v31 - 2);
            *(_DWORD *)(v33 - 4) = *(v31 - 1);
          }
          while ( v31 != v32 );
          v42 = 0;
          v17 = 0;
LABEL_27:
          v6 = sub_517BA0(a1, a2);
          v6[1] = HIDWORD(v35);
          *((_QWORD *)v6 + 1) = v40;
          v6[5] = v42;
          if ( v17
            && (v18 = *(_QWORD **)(*a1 + 1480LL), v17 < (unsigned int)sub_630AA0(v18, v18[1]))
            && (v19 = (_BYTE *)sub_6309B0(v18, v18[1], v17, 0)) != nullptr
            && *v19
            && (v20 = (_DWORD *)sub_517FB0(*(_QWORD **)(**(_QWORD **)(*v18 + 1680LL) + 1616LL), (__int64)v19)) != nullptr
            && a2 == *v20 )
          {
            v41 = v17;
          }
          else
          {
            v41 = 0;
          }
          goto LABEL_13;
        }
      }
      v15 = sub_517BA0(a1, a2);
      v15[1] = 0;
      v6 = v15;
      *((_QWORD *)v15 + 1) = 0;
      v15[5] = 0;
      v41 = 0;
    }
    else
    {
      if ( (dword_2CA24C8 & 0x400) != 0 )
        v42 = 0;
      else
        v42 = unpack_dd(&v43);
      v11 = unpack_dd(&v43);
      HIDWORD(v35) = v11;
      v40 = 0;
      if ( v11 )
      {
        v40 = qcalloc(v11, 20);
        if ( !v40 )
          sub_3B74D0((int)"get_struct");
        v21 = (_DWORD *)v40;
        v22 = 0;
        v23 = 0;
        v38 = 0;
        while ( 1 )
        {
          v24 = v23;
          v23 = v43.m128i_i64[0];
          v37 = v22;
          if ( v43.m128i_i64[0] == v24 )
            break;
          *v21 = v36 + unpack_dd(&v43);
          if ( (v42 & 2) != 0 )
          {
            v21[1] = unpack_dd(&v43);
            v21[2] = unpack_dd(&v43);
          }
          else
          {
            v25 = unpack_dd(&v43);
            v21[1] = v25 + v38;
            v26 = v25 + v38 + unpack_dd(&v43);
            v27 = v21[1];
            v38 = v26;
            v21[2] = v26;
            if ( v26 < v27 )
              goto LABEL_49;
            if ( (int)v22 > 0 && v27 < *(v21 - 3) )
            {
              HIDWORD(v35) = v22;
LABEL_44:
              if ( (dword_2CA24C8 & 0x400) == 0 )
              {
                v37 = HIDWORD(v35);
                goto LABEL_46;
              }
              v37 = HIDWORD(v35);
              v28 = v40 + 20LL * HIDWORD(v35) - 20;
              goto LABEL_51;
            }
          }
          v21[3] = (unsigned int)unpack_dd(&v43) << 8;
          v21[4] = unpack_dd(&v43);
          v22 = (unsigned int)(v22 + 1);
          v21 += 5;
          if ( HIDWORD(v35) == (_DWORD)v22 )
            goto LABEL_44;
        }
        sub_82BC50(
          "incorrect structure definition\n",
          v35,
          v36,
          v38,
          (int)v39,
          v40,
          v41,
          v43.m128i_i32[0],
          v43.m128i_i32[2],
          (int)ptr,
          v45,
          *((__int64 *)&v45 + 1));
LABEL_49:
        if ( (dword_2CA24C8 & 0x400) == 0 )
          goto LABEL_46;
        v28 = v40 + 20 * v22 - 20;
        if ( v40 + 20 * v22 == 20 )
          goto LABEL_46;
LABEL_51:
        v29 = 0;
        if ( (*(_BYTE *)(v28 + 16) & 2) == 0 )
          v29 = *(_DWORD *)(v28 + 4);
        if ( *(_DWORD *)(v28 + 8) == v29
          || (int)sub_3C57B0(v39, *(_DWORD *)v28, *(unsigned int *)(v28 + 12), nullptr, nullptr) > 0 )
        {
          v42 |= 1u;
        }
LABEL_46:
        HIDWORD(v35) = v37;
      }
      if ( v43.m128i_i64[0] < (unsigned __int64)v43.m128i_i64[1] )
      {
        v16 = unpack_dd(&v43);
        v17 = v16 - 1;
        if ( v16 )
          goto LABEL_27;
      }
      v6 = sub_517BA0(a1, a2);
      v6[1] = HIDWORD(v35);
      *((_QWORD *)v6 + 1) = v40;
      v6[5] = v42;
    }
LABEL_13:
    v6[6] = v41;
    sub_5163F0(v39, (__int64)v6);
    goto LABEL_19;
  }
  return v6;
}

