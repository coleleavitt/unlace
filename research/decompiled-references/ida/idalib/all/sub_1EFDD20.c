_QWORD *__fastcall sub_1EFDD20(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r9
  int v11; // r10d
  unsigned int i; // edx
  __int64 v13; // rdi
  __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // esi
  bool v32; // zf
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  _QWORD *v35; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v36; // [rsp+8h] [rbp-50h] BYREF
  __int64 v37; // [rsp+10h] [rbp-48h] BYREF
  int v38; // [rsp+18h] [rbp-40h]
  __int64 v39; // [rsp+20h] [rbp-38h]

  result = (_QWORD *)sub_B970F0(a2);
  if ( !result )
    return result;
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 128) + 112LL);
  v6 = sub_B970F0(a2);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  v8 = *(unsigned int *)(a1 + 3664);
  v9 = *(_QWORD *)(a1 + 3648);
  if ( (_DWORD)v8 )
  {
    v10 = (unsigned int)(v8 - 1);
    v11 = 1;
    for ( i = v10
            & (((0xBF58476D1CE4E5B9LL
               * ((unsigned int)(37 * v5) | ((unsigned __int64)(((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4)) << 32))) >> 31)
             ^ (756364221 * v5)); ; i = v10 & v15 )
    {
      v13 = v9 + 24LL * i;
      v14 = *(_QWORD *)v13;
      if ( v7 == *(_QWORD *)v13 && v5 == *(_DWORD *)(v13 + 8) )
        break;
      if ( v14 == -4096 && *(_DWORD *)(v13 + 8) == -1 )
        goto LABEL_19;
      v15 = v11 + i;
      ++v11;
    }
    if ( v13 != v9 + 24 * v8 )
    {
      v16 = *(_QWORD *)(v13 + 16);
      if ( *(char *)(v16 + 29) < 0 && *(_QWORD *)(a2 + 104) == a2 )
      {
        v17 = sub_7052B0((__int64 *)(*(_QWORD *)(v16 + 104) + 96LL), *(_QWORD *)(v16 + 104), v16, v8, v14, v10);
        v22 = v17;
        if ( v17 )
        {
          v23 = v17[13];
          *(_QWORD *)(a2 + 104) = v23;
          v24 = (unsigned __int64)sub_7052B0((__int64 *)(v23 + 96), v23, v18, v19, v20, v21);
          v25 = *(_QWORD *)(a2 + 104);
          *(_QWORD *)(a2 + 96) = v24 & 0xFFFFFFFFFFFFFFFCLL;
          v19 = *(_WORD *)(a2 + 30) & 0x3FFF;
          v18 = (unsigned int)v19 | *(_WORD *)(v24 + 30) & 0x26;
          *(_WORD *)(a2 + 30) = v19 | *(_WORD *)(v24 + 30) & 0x26 | *(_WORD *)(a2 + 30) & 0xC000;
        }
        else
        {
          *(_QWORD *)(a2 + 104) = a2;
          v25 = a2;
        }
        v26 = *(_QWORD *)(v25 + 96);
        if ( (v26 & 1) != 0 || (v26 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        {
          v33 = v26 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v26 & 0xFFFFFFFFFFFFFFFELL) != 0 && (v26 & 4) != 0 && (v34 = v26 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            *(_QWORD *)(v34 + 16) = a2;
          else
            v33 = a2 & 0xFFFFFFFFFFFFFFFALL;
          *(_QWORD *)(v25 + 96) = v33 | 1;
        }
        else
        {
          *(_QWORD *)(v25 + 96) = sub_6E2500((_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL), a2, v18, v19, v20, v21) | 1;
        }
        result = *(_QWORD **)(a2 + 48);
        result[1] = *(_QWORD *)(v22[6] + 8LL);
        return result;
      }
    }
  }
LABEL_19:
  v39 = a2;
  v37 = v7;
  v38 = v5;
  result = (_QWORD *)sub_1ECDE20((__int64 *)(a1 + 3648), &v37, &v35);
  if ( (_BYTE)result )
    return result;
  result = v35;
  v28 = (unsigned int)(*(_DWORD *)(a1 + 3656) + 1);
  v29 = *(unsigned int *)(a1 + 3664);
  v36 = v35;
  v30 = (unsigned int)(4 * v28);
  v31 = 2 * v29;
  if ( (unsigned int)v30 < 3 * (int)v29 )
  {
    if ( (int)v29 - *(_DWORD *)(a1 + 3660) - (int)v28 > (unsigned int)v29 >> 3 )
      goto LABEL_22;
    v31 = v29;
  }
  sub_1EFDA80((__int64 **)(a1 + 3648), v31, v28, v29, v30, v27);
  sub_1ECDE20((__int64 *)(a1 + 3648), &v37, &v36);
  LODWORD(v28) = *(_DWORD *)(a1 + 3656) + 1;
  result = v36;
LABEL_22:
  v32 = *result == -4096;
  *(_DWORD *)(a1 + 3656) = v28;
  if ( !v32 || *((_DWORD *)result + 2) != -1 )
    --*(_DWORD *)(a1 + 3660);
  *result = v37;
  *((_DWORD *)result + 2) = v38;
  result[2] = v39;
  return result;
}
