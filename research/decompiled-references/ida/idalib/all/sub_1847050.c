__int64 __fastcall sub_1847050(_QWORD *a1)
{
  __int64 v3; // rbp
  size_t v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // [rsp-10h] [rbp-38h]
  __int64 v32; // [rsp-8h] [rbp-30h]
  _QWORD v33[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (a1[521] & 1) == 0 && !a1[521] )
  {
    v3 = a1[30] + 552LL;
    v4 = j__strlen("std");
    v5 = sub_6F3470(v3, "std", v4);
    v9 = a1[31];
    v10 = v5;
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 2264) + 80LL);
    v12 = *(_QWORD *)(v11 + 72);
    if ( (v12 & 1) != 0 || (v29 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL), (v12 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v30 = *(_QWORD *)(v11 + 72) & 2LL;
      v15 = (__int64)v29;
      if ( !(_DWORD)v30 )
      {
LABEL_7:
        if ( v15 )
          v15 += 40;
        a1[521] = sub_BA4BE0(v9, v15, 0, 0, 0, v10, 0, 0);
        v16 = sub_183D350((__int64)a1);
        *(_BYTE *)(v16 + 29) |= 2u;
        v19 = *(_QWORD *)(*(_QWORD *)(a1[31] + 2264LL) + 80LL);
        v20 = *(_QWORD *)(v19 + 72);
        if ( (v20 & 1) != 0 || (v20 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        {
          v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          v22 = v20 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v20 & 2) == 0 )
            goto LABEL_12;
          v21 = sub_6E2500(
                  (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL),
                  *(_QWORD *)(*(_QWORD *)(a1[31] + 2264LL) + 80LL),
                  v31,
                  v32,
                  v17,
                  v18)
              & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)(v19 + 72) = v21 | 1;
        }
        v33[0] = v21;
        v22 = sub_B7BB70(v33);
LABEL_12:
        v23 = sub_183D350((__int64)a1);
        sub_B94AD0((__m128i *)(v22 + 40), v23, v24, v25, v26, v27);
        v28 = sub_183D350((__int64)a1);
        *(_WORD *)(v28 + 30) &= 0xC000u;
        return sub_183D350((__int64)a1);
      }
      v13 = sub_6E2500(v29, v11, v30, v6, v7, v8) & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v11 + 72) = v13 | 1;
    }
    v33[0] = v13;
    v14 = sub_B7BB70(v33);
    v9 = a1[31];
    v15 = v14;
    goto LABEL_7;
  }
  return sub_183D350((__int64)a1);
}
