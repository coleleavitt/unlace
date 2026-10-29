unsigned __int64 __fastcall sub_E23410(const __m128i *a1)
{
  __int32 v1; // eax
  unsigned __int64 v2; // r12
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v7; // r15
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r15
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // esi
  int v23; // r8d
  unsigned int v24; // ebx
  _DWORD *v25; // rdx
  __int64 v26; // rax
  int v27; // esi
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // [rsp+0h] [rbp-A8h]
  __int64 v32; // [rsp+0h] [rbp-A8h]
  __int64 v33; // [rsp+0h] [rbp-A8h]
  __int32 v34; // [rsp+0h] [rbp-A8h]
  int v35; // [rsp+Ch] [rbp-9Ch]
  unsigned __int64 v36; // [rsp+10h] [rbp-98h] BYREF
  __int128 v37; // [rsp+18h] [rbp-90h]
  int v38; // [rsp+28h] [rbp-80h]
  __m128i v39; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+40h] [rbp-68h] BYREF
  __int128 v41; // [rsp+48h] [rbp-60h]
  int v42; // [rsp+58h] [rbp-50h]
  __int64 v43; // [rsp+60h] [rbp-48h]
  unsigned int v44; // [rsp+68h] [rbp-40h]

  v1 = a1[1].m128i_i32[2];
  v2 = a1->m128i_i64[0];
  switch ( v1 )
  {
    case 1:
      v2 += a1[2].m128i_u64[1];
      return v2;
    case 3:
      v2 += a1[2].m128i_u64[0];
      return v2;
    case 0:
      v4 = a1[2].m128i_i64[0];
      v36 = v2;
      v37 = 0;
      v38 = 0;
      v39 = _mm_loadu_si128(a1 + 2);
      if ( v4 )
      {
        v2 = 0;
        sub_E1E330(v4, (__int64)&v36);
        v5 = v38;
        if ( v38 )
        {
LABEL_6:
          if ( (unsigned __int8)sub_CFE6D0((__int64)&v36) )
            goto LABEL_7;
          return v2;
        }
      }
      v2 = 0;
      v7 = v39.m128i_i64[0];
      v8 = v39.m128i_u32[2];
      while ( 1 )
      {
        if ( v7 )
        {
          v12 = *(_QWORD *)(v7 + 32);
          if ( *(_DWORD *)(v12 + 24) == v8
            || !v8
            || (v32 = *(_QWORD *)(v7 + 32),
                v14 = (__int64 *)sub_CFDF60((__int64)&v36),
                v12 = v32,
                v15 = *v14,
                (v15 & 2) != 0)
            || (v15 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          {
            if ( *(_DWORD *)(v12 + 24) == v8 || !v8 )
              goto LABEL_29;
          }
          else if ( (*(_BYTE *)(v7 + v8 + 28) & 8) != 0 )
          {
            v2 += *(unsigned int *)(a1[2].m128i_i64[0] + a1[2].m128i_u32[2] + 24);
            if ( v8 != -1 )
            {
              v8 -= *(_DWORD *)(v7 + v8 + 24);
              v40 = v8;
LABEL_43:
              v42 = 0;
              v43 = v7;
              v44 = v8;
              v41 = 0;
              goto LABEL_44;
            }
            goto LABEL_86;
          }
          v13 = sub_CFDF60((__int64)&v36);
          if ( (*(_QWORD *)v13 & 2) == 0 && (*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v25 = (_DWORD *)(v7 + v8 + 24);
            if ( (*(_BYTE *)(v7 + v8 + 28) & 4) != 0 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v13 + 32) + 496LL) )
                v2 += (unsigned int)*v25;
              if ( v8 != -1 )
              {
                v8 -= *v25;
                v40 = v8;
                goto LABEL_43;
              }
LABEL_86:
              v40 = 0;
              goto LABEL_43;
            }
            goto LABEL_30;
          }
        }
LABEL_29:
        v13 = sub_CFDF60((__int64)&v36);
LABEL_30:
        if ( *(_BYTE *)(v13 + 60) && v8 != v36 || v8 > 0xF && *(char *)(v7 + v8 + 28) < 0 )
        {
          sub_CFE160((__int64)&v40, (__int64)&v36);
          sub_E23300((__int64)&v36, (const __m128i *)&v40);
          if ( !v42 )
            sub_E22AD0(&v40);
          v7 = v39.m128i_i64[0];
          v9 = v39.m128i_u32[2];
          if ( v38 )
          {
            if ( v38 != 1 )
            {
              v10 = v39.m128i_i64[0] + v36;
              if ( v39.m128i_i32[2] == -1 )
              {
                if ( (unsigned int)(v38 - 2) <= 1 )
                  BUG();
                goto LABEL_104;
              }
              goto LABEL_19;
            }
            if ( !v39.m128i_i64[0] )
            {
              v2 += v39.m128i_i64[1] + v36;
              if ( v39.m128i_i32[2] == -1 )
                v40 = 0;
              else
                v40 = v39.m128i_u32[2];
              v42 = 0;
              v41 = 0;
              v43 = 0;
              v44 = v39.m128i_u32[2];
              goto LABEL_20;
            }
            v2 += *(unsigned int *)(v39.m128i_i64[0] + 16)
                * (v39.m128i_i64[1] + *(unsigned int *)(v39.m128i_i64[0] + 16) * v36);
            if ( v39.m128i_i32[2] == -1 )
            {
              v40 = 0;
              goto LABEL_98;
            }
          }
          else
          {
            if ( !v39.m128i_i64[0] )
              goto LABEL_111;
            if ( v39.m128i_i32[2] > 0x10u )
            {
              if ( v39.m128i_u32[2] == v36 )
              {
LABEL_111:
                v10 = 0;
                goto LABEL_103;
              }
              if ( v39.m128i_i32[2] == -1 )
              {
                v29 = *(_QWORD *)(v39.m128i_i64[0] + 32);
                v10 = *(unsigned int *)(v29 + 20);
                if ( *(_DWORD *)(v29 + 20) )
                {
                  v28 = v36;
                  goto LABEL_102;
                }
LABEL_105:
                v30 = *(unsigned int *)(v29 + 20);
                v43 = v7;
                v40 = 0;
                v41 = 0;
                v42 = 0;
                v44 = -1;
                v2 += v30 * v10;
LABEL_44:
                sub_E1E330(v7, (__int64)&v40);
                goto LABEL_20;
              }
            }
            v34 = v39.m128i_i32[2];
            v26 = sub_CFDF60((__int64)&v36);
            v9 = v34;
            v10 = *(unsigned int *)(v26 + 16);
            if ( *(_DWORD *)(v26 + 16) )
            {
              v27 = 0;
              if ( v36 != v34 )
                v27 = *(_QWORD *)(v26 + 40) == 0 ? 32 : 16;
              v28 = v36 - v34 - v27;
LABEL_102:
              v10 = v28 / v10;
LABEL_103:
              if ( v9 == -1 )
              {
LABEL_104:
                v29 = *(_QWORD *)(v7 + 32);
                goto LABEL_105;
              }
LABEL_19:
              v31 = v9;
              v11 = *(unsigned int *)(sub_CFDF60((__int64)&v36) + 16);
              v41 = 0;
              v42 = 0;
              v43 = v7;
              v40 = v31;
              v2 += v11 * v10;
              v44 = v31;
              if ( !v7 )
                goto LABEL_20;
              goto LABEL_44;
            }
          }
          v40 = v9;
LABEL_98:
          v43 = v7;
          v41 = 0;
          v42 = 0;
          v44 = v9;
          sub_E1E330(v7, (__int64)&v40);
LABEL_20:
          sub_E23300((__int64)&v36, (const __m128i *)&v40);
          if ( !v42 )
            sub_E22AD0(&v40);
          v5 = v38;
          if ( v38 )
            goto LABEL_6;
          v7 = v39.m128i_i64[0];
          v8 = v39.m128i_u32[2];
        }
        else
        {
          if ( !v7 || *(_DWORD *)(*(_QWORD *)(v7 + 32) + 24LL) == v8 || !v8 )
          {
            if ( !(unsigned __int8)sub_CFE6D0((__int64)&v36) )
              goto LABEL_8;
            v5 = 0;
LABEL_7:
            ++v2;
            if ( !v5 )
LABEL_8:
              sub_E22AD0(&v36);
            return v2;
          }
          if ( v8 == -1 )
          {
            v40 = 0;
          }
          else
          {
            v8 -= *(_DWORD *)(v7 + v8 + 24);
            v40 = v8;
          }
          v43 = v7;
          v41 = 0;
          v42 = 0;
          v44 = v8;
          sub_E1E330(v7, (__int64)&v40);
          switch ( v42 )
          {
            case 1:
              v17 = *(_QWORD *)(v43 + 32);
              goto LABEL_54;
            case 0:
              if ( v43 )
              {
                v16 = *(_QWORD *)(v43 + 32);
                if ( *(_DWORD *)(v16 + 24) != v44 && v44 )
                  v17 = *(_QWORD *)(*(_QWORD *)(v43 + v44 + 32) + 32LL);
                else
LABEL_52:
                  v17 = *(_QWORD *)(v16 + 32);
                sub_E22AD0(&v40);
                goto LABEL_54;
              }
              v16 = 64;
              goto LABEL_52;
            case 2:
              if ( !v43 )
                BUG();
LABEL_107:
              BUG();
            case 3:
              goto LABEL_107;
          }
          v17 = *(_QWORD *)(*(_QWORD *)(v43 + 32) + 32LL);
LABEL_54:
          if ( v17 && *(_BYTE *)(v17 + 648) )
          {
            sub_D8B030((__int64)&v40, (__int64)&v36);
            goto LABEL_20;
          }
          v18 = v39.m128i_i64[0];
          v19 = v39.m128i_u32[2];
          v20 = *(unsigned int *)(v39.m128i_i64[0] + v39.m128i_u32[2] + 24);
          v33 = v39.m128i_u32[2];
          v2 += v20;
          if ( v38 )
          {
            if ( v39.m128i_i32[2] == -1 )
            {
              v40 = 0;
            }
            else
            {
              v19 = v39.m128i_i32[2] - v20;
              v40 = (unsigned int)(v39.m128i_i32[2] - v20);
            }
            v42 = 0;
            v41 = 0;
            v43 = v39.m128i_i64[0];
            v44 = v19;
            if ( v39.m128i_i64[0] )
              goto LABEL_66;
          }
          else
          {
            if ( v39.m128i_i64[0] )
            {
              v35 = *(_DWORD *)(v39.m128i_i64[0] + v39.m128i_u32[2] + 24);
              v21 = sub_CFDF60((__int64)&v36);
              v22 = *(_DWORD *)(v21 + 20);
              if ( v22 == -1 )
                goto LABEL_84;
              if ( v36 > *(unsigned int *)(*(_QWORD *)(v18 + 32) + 28LL) )
                goto LABEL_83;
              if ( v19 == -1 )
              {
                if ( v22 == (_DWORD)v36 && v22 )
                  goto LABEL_83;
              }
              else
              {
                v23 = 0;
                if ( v33 != v36 )
                  v23 = *(_QWORD *)(v21 + 40) == 0 ? 32 : 16;
                if ( (_DWORD)v36 - v19 - v23 != v22 || !v22 )
                {
LABEL_65:
                  v24 = v19 - v35;
                  v42 = 0;
                  v43 = v18;
                  v40 = v24;
                  v44 = v24;
                  v41 = 0;
LABEL_66:
                  sub_E1E330(v18, (__int64)&v40);
                  goto LABEL_67;
                }
LABEL_83:
                ++v2;
LABEL_84:
                if ( v19 != -1 )
                  goto LABEL_65;
              }
              v42 = 0;
              v40 = 0;
              v41 = 0;
              v43 = v18;
              v44 = -1;
              goto LABEL_66;
            }
            if ( v39.m128i_i32[2] == -1 )
            {
              v40 = 0;
            }
            else
            {
              v19 = v39.m128i_i32[2] - v20;
              v40 = (unsigned int)(v39.m128i_i32[2] - v20);
            }
            v42 = 0;
            v41 = 0;
            v43 = 0;
            v44 = v19;
          }
LABEL_67:
          sub_E23300((__int64)&v36, (const __m128i *)&v40);
          if ( !v42 )
            sub_E22AD0(&v40);
          if ( v38 )
            return v2;
          v7 = v39.m128i_i64[0];
          if ( !v39.m128i_i64[0] )
            goto LABEL_8;
          v8 = v39.m128i_u32[2];
          if ( *(_DWORD *)(*(_QWORD *)(v39.m128i_i64[0] + 32) + 24LL) == v39.m128i_i32[2] || !v39.m128i_i32[2] )
            goto LABEL_8;
        }
      }
  }
  return v2;
}
