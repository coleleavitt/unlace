unsigned __int64 __fastcall sub_8EA850(__int64 *a1, __int64 a2)
{
  _DWORD *v2; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 result; // rax
  unsigned __int8 *v8; // rax
  unsigned int *v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rbp
  int v12; // r14d
  _QWORD *v13; // r12
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int8 *v19; // [rsp+8h] [rbp-78h]
  unsigned __int8 *v20; // [rsp+10h] [rbp-70h]
  unsigned __int8 *v21; // [rsp+18h] [rbp-68h]
  unsigned __int64 v22; // [rsp+20h] [rbp-60h]
  unsigned __int64 v23; // [rsp+28h] [rbp-58h]
  int v24; // [rsp+28h] [rbp-58h]
  int v25; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-40h]

  v2 = (_DWORD *)(a2 + 232);
  v4 = a2 + 4928;
  v5 = *(_QWORD *)(a2 + 3208);
  v6 = *(_QWORD *)(a2 + 3200);
  v26 = __readfsqword(0x28u);
  result = sub_8EA050(a1, v6, v5, v2, v4, *(_QWORD **)(a2 + 3520), 0x22D8u);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    v8 = (unsigned __int8 *)a1[5];
    v9 = (unsigned int *)a1[2];
    v25 = 255;
    v19 = v8;
    v10 = a1[3] - (_QWORD)v9;
    v11 = (a1[1] - *a1) >> 3;
    v12 = *(_DWORD *)(a2 + 4928);
    v13 = *(_QWORD **)(a2 + 3520);
    v14 = *(_QWORD *)(a2 + 3208);
    v20 = (unsigned __int8 *)a1[4];
    v21 = (unsigned __int8 *)a1[6];
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v10 = 1;
      }
      else if ( (unsigned int)(v12 - 2) <= 1 )
      {
        v22 = a1[3] - (_QWORD)v9;
        v24 = (v10 > 0x3FF) + 3;
        v17 = sub_8E10B0(v13, &v25, v9, v10, v13, 0x22D8u);
        v10 = v22;
        if ( v17 <= 0xFFFFFFFFFFFFFF88LL )
        {
          v18 = sub_8E4980(v14, (__int64)v13, v25);
          if ( v12 == 2 )
            v18 += *(_QWORD *)(a2 + 5064);
          if ( v22 > 0xFF )
            v18 += 6LL;
          v10 = v18 + v24 + (v22 > 0x3FFF);
        }
      }
      else
      {
        v10 = 0;
      }
    }
    v23 = v10;
    v15 = sub_8E6360(*(_DWORD *)(a2 + 5076), v21, v11, 0x1Fu, v14 + 2064, 0, (__int64)&unk_23B3220, 5u, v13);
    v16 = sub_8E6360(
            *(_DWORD *)(a2 + 5072),
            v20,
            v11,
            0x23u,
            v14 + 4288,
            (__int64)&unk_23B3380,
            (__int64)&unk_23B3320,
            6u,
            v13);
    return sub_8E6360(
             *(_DWORD *)(a2 + 5080),
             v19,
             v11,
             0x34u,
             v14 + 2836,
             (__int64)&unk_23B32E0,
             (__int64)&unk_23B3260,
             6u,
             v13)
         + v23
         + *(_QWORD *)(a2 + 5224)
         + 3
         + v15
         + v16
         + (v11 > 0x7F)
         + 2
         + (v11 > 0x7EFF);
  }
  return result;
}

