__int64 __fastcall sub_1F99BE0(__int64 *a1, __int64 a2, int *a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rsi
  _BOOL8 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 *v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r13
  int v21; // esi
  int *v22; // rbx
  __int64 v23; // r12
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 *v28; // r13
  int *v29; // rbx
  __int64 v30; // r14
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // esi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 *v38; // r13
  int *v39; // rbx
  __int64 v40; // r14
  int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rdi
  int v44; // ebx
  double v45[2]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+10h] [rbp-50h] BYREF
  __m128 v47; // [rsp+18h] [rbp-48h] BYREF
  __int64 v48; // [rsp+30h] [rbp-30h]

  result = a2 & 7 | (a2 >> 3) & 1;
  if ( !result )
  {
    result = *(unsigned __int8 *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    switch ( *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
    {
      case 0:
      case 1:
      case 3:
      case 9:
      case 0xC:
      case 0x1B:
      case 0x1C:
      case 0x3B:
        return result;
      case 2:
      case 4:
      case 5:
      case 6:
        return sub_1F6FDB0((__int64)a1, (__int64)a3);
      case 7:
      case 0x33:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[1], *(_QWORD *)(*a1 + 16));
        return sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[2], *(_QWORD *)(*a1 + 16));
      case 8:
        return sub_1F9A7E0(*a1, *(_QWORD *)a3);
      case 0xA:
      case 0xB:
      case 0xE:
      case 0x11:
      case 0x13:
      case 0x15:
      case 0x17:
      case 0x1D:
      case 0x1E:
      case 0x22:
      case 0x26:
      case 0x27:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x32:
      case 0x35:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
        return sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
      case 0xD:
        *(_QWORD *)&v45[0] = a2;
        v7 = *a1;
        v8 = (unsigned int)*a3;
        *(_QWORD *)&v45[0] = a3;
        v47 = _mm_loadh_ps(v45);
        sub_1F6F570(*(_QWORD **)(v7 + 8), v8, *(_QWORD *)(v7 + 16));
        result = v47.m128_u64[0];
        if ( (((*(_WORD *)(v47.m128_u64[0] + 18) >> 3) + 74) & 0x1FFu) <= 0x31 )
        {
          result = 0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v47.m128_u64[0] + 18) >> 3) + 74);
          if ( (result & 1) != 0 )
          {
            v9 = *a1;
            v10 = sub_F6CF10(&v47, v8);
            sub_9B9C90(*(_QWORD *)(v9 + 16), v10);
            v11 = 0;
            if ( (((*(_WORD *)(v47.m128_u64[0] + 18) >> 3) + 74) & 0x1FFu) <= 0x31
              && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v47.m128_u64[0] + 18) >> 3) + 74)) & 1) != 0 )
            {
              v11 = (*(_WORD *)(v47.m128_u64[1] + 8) >> 7) & 3;
            }
            sub_9B9C90(*(_QWORD *)(*a1 + 16), v11);
            v12 = 0;
            if ( (((*(_WORD *)(v47.m128_u64[0] + 18) >> 3) + 74) & 0x1FFu) <= 0x31
              && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v47.m128_u64[0] + 18) >> 3) + 74)) & 1) != 0 )
            {
              v12 = (*(_BYTE *)(v47.m128_u64[1] + 9) >> 1) & 3;
            }
            sub_9B9C90(*(_QWORD *)(*a1 + 16), v12);
            v13 = 0;
            if ( (((*(_WORD *)(v47.m128_u64[0] + 18) >> 3) + 74) & 0x1FFu) <= 0x31
              && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v47.m128_u64[0] + 18) >> 3) + 74)) & 1) != 0 )
            {
              v13 = (*(_BYTE *)(v47.m128_u64[1] + 9) & 8) != 0;
            }
            return sub_9B9C90(*(_QWORD *)(*a1 + 16), v13);
          }
        }
        return result;
      case 0xF:
      case 0x24:
      case 0x28:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        goto LABEL_20;
      case 0x10:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        v14 = *((_QWORD *)a3 + 1);
        v15 = *(_QWORD *)(*a1 + 16);
        if ( *(_QWORD *)(a2 + 32) && v14 )
        {
          sub_9B9C90(v15, 1);
          if ( !*(_QWORD *)(a2 + 32) )
            goto LABEL_28;
          goto LABEL_27;
        }
        sub_9B9C90(v15, 0);
        if ( *(_QWORD *)(a2 + 32) && v14 )
LABEL_27:
          sub_1F99B40(*a1, v14);
LABEL_28:
        sub_9B9C90(*(_QWORD *)(*a1 + 16), ((*(_BYTE *)(a2 + 18) >> 3) & 3) == 1);
        result = (*(_BYTE *)(a2 + 18) >> 3) & 3;
        if ( (_BYTE)result == 1 )
LABEL_20:
          result = sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[1], *(_QWORD *)(*a1 + 16));
        break;
      case 0x12:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[4], *(_QWORD *)(*a1 + 16));
        v44 = a3[3];
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[2], *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), v44, *(_QWORD *)(*a1 + 16));
        return sub_183F100(*a1 + 24, *(_QWORD *)a3);
      case 0x14:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        sub_1F9A420(*a1, *(_QWORD *)(a2 + 32), *((_QWORD *)a3 + 1));
        return sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[4], *(_QWORD *)(*a1 + 16));
      case 0x16:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        v25 = *((_QWORD *)a3 + 1);
        v26 = *a1;
        v27 = 0;
        if ( v25 )
          v27 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF8LL;
        sub_1F9A420(v26, v27, v25);
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[5], *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[4], *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[6], *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[7], *(_QWORD *)(*a1 + 16));
        result = *(unsigned int *)(a2 + 20);
        if ( (_DWORD)result )
        {
          v28 = (__int64 *)(a3 + 8);
          v29 = (int *)(a2 + 48);
          v30 = (__int64)&a3[2 * (unsigned int)(result - 1) + 10];
          do
          {
            v31 = *v29;
            v32 = *v28++;
            v33 = *a1;
            v29 += 6;
            v48 = v32;
            v46 = v32;
            result = sub_1FA10D0(v33, v31 & 0x7FFFFFFF, &v46);
          }
          while ( (__int64 *)v30 != v28 );
        }
        return result;
      case 0x18:
        if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) != 6 || (v34 = 0, *(_QWORD *)(a2 + 32)) )
          v34 = *a3;
        sub_1F6F570(*(_QWORD **)(*a1 + 8), v34, *(_QWORD *)(*a1 + 16));
        v35 = *a1;
        v36 = *(_QWORD *)(a2 + 32);
        if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) != 6 || (v37 = 0, v36) )
          v37 = *((_QWORD *)a3 + 1);
        return sub_1F9A420(v35, v36, v37);
      case 0x19:
      case 0x1A:
        return sub_1F95E40((__int64)a1, a2, a3);
      case 0x1F:
      case 0x20:
        return sub_1F6FE30((__int64)a1, (__int64)a3);
      case 0x21:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        v35 = *a1;
        v37 = *((_QWORD *)a3 + 1);
        v36 = *(_QWORD *)(a2 + 40);
        return sub_1F9A420(v35, v36, v37);
      case 0x23:
        sub_9B9C90(*(_QWORD *)(*a1 + 16), *((unsigned __int8 *)a3 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[1], *(_QWORD *)(*a1 + 16));
        if ( ((*(_WORD *)(a2 + 18) >> 3) & 0x7F) != 0 )
        {
          v16 = (__int64 *)(a3 + 6);
          v17 = (__int64)&a3[2 * ((*(_WORD *)(a2 + 18) >> 3) & 0x7F) + 6];
          do
          {
            v18 = *v16++;
            sub_1F9A760(*a1, v18);
          }
          while ( (__int64 *)v17 != v16 );
        }
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[2], *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[3], *(_QWORD *)(*a1 + 16));
        result = *(_BYTE *)(a2 + 19) >> 2;
        if ( *(_BYTE *)(a2 + 19) >> 2 )
        {
          v19 = 0;
          v20 = 4LL * (unsigned int)(result - 1) + 4;
          do
          {
            v19 += 4;
            result = sub_1F6F570(
                       *(_QWORD **)(*a1 + 8),
                       *(int *)((char *)a3 + (*(_WORD *)(a2 + 18) & 0x3F8) + v19 + 20),
                       *(_QWORD *)(*a1 + 16));
          }
          while ( v20 != v19 );
        }
        return result;
      case 0x25:
        if ( (*(_BYTE *)(a2 + 32) & 0x3F) != 0 )
        {
          sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[1], *(_QWORD *)(*a1 + 16));
          v21 = 0;
          if ( (*(_BYTE *)(a2 + 32) & 0x3F) != 0 )
            v21 = a3[2];
          sub_1F6F570(*(_QWORD **)(*a1 + 8), v21, *(_QWORD *)(*a1 + 16));
          result = *(_BYTE *)(a2 + 32) & 0x3F;
          if ( (*(_BYTE *)(a2 + 32) & 0x3F) != 0 )
          {
            v22 = a3 + 3;
            v23 = (__int64)&a3[(unsigned int)(result - 1) + 4];
            do
            {
              v24 = *v22++;
              result = sub_1F6F570(*(_QWORD **)(*a1 + 8), v24, *(_QWORD *)(*a1 + 16));
            }
            while ( (int *)v23 != v22 );
          }
        }
        return result;
      case 0x31:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[1], *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[2], *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[3], *(_QWORD *)(*a1 + 16));
        result = *(unsigned int *)(a2 + 20);
        if ( (_DWORD)result )
        {
          v38 = (__int64 *)(a3 + 4);
          v39 = (int *)(a2 + 48);
          v40 = (__int64)&a3[2 * (unsigned int)(result - 1) + 6];
          do
          {
            v41 = *v39;
            v42 = *v38++;
            v43 = *a1;
            v39 += 6;
            v48 = v42;
            v46 = v42;
            result = sub_1FA10D0(v43, v41 & 0x7FFFFFFF, &v46);
          }
          while ( (__int64 *)v40 != v38 );
        }
        return result;
      case 0x34:
      case 0x36:
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *a3, *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[1], *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), a3[2], *(_QWORD *)(*a1 + 16));
        return sub_1F9A760(*a1, *((_QWORD *)a3 + 2));
    }
  }
  return result;
}
