unsigned __int64 __fastcall sub_6711D0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // esi
  int *v5; // r8
  int *v6; // r12
  int *v7; // r14
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  size_t v17; // r9
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // [rsp+0h] [rbp-68h]
  unsigned __int64 v20; // [rsp+0h] [rbp-68h]
  size_t na; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+8h] [rbp-60h]
  unsigned __int64 v23; // [rsp+10h] [rbp-58h]
  unsigned __int64 v24; // [rsp+10h] [rbp-58h]
  _BYTE src[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v27[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *(_DWORD *)(a1 + 16);
  v27[0] = __readfsqword(0x28u);
  sub_407AD0(a3, v3);
  v5 = *(int **)(a1 + 8);
  v6 = &v5[3 * *(_QWORD *)(a1 + 16)];
  if ( v6 != v5 )
  {
    v7 = *(int **)(a1 + 8);
    v8 = -1;
    while ( 1 )
    {
      v12 = (unsigned int)(*v7 - v8);
      if ( v8 == -1 )
        v12 = (unsigned int)sub_3B90A0(*(_QWORD **)(a2 + 1480), *v7);
      v13 = pack_dd(src, v27, v12) - (_QWORD)src;
      v17 = v13;
      if ( !v13 )
        goto LABEL_7;
      v16 = a3[1];
      v18 = v16 + v13;
      if ( !__CFADD__(v16, v13) )
        goto LABEL_3;
      if ( v16 <= 0x7FFFFFFFFFFFFFFELL )
        break;
      if ( v16 != 0x7FFFFFFFFFFFFFFFLL )
        a3[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
      memcpy((void *)(v16 + *a3), src, v17);
LABEL_7:
      v11 = v7[1];
      v7 += 3;
      sub_407AD0(a3, v11);
      sub_407AD0(a3, *(v7 - 1));
      v8 = *(v7 - 3);
      if ( v6 == v7 )
        return v27[0] - __readfsqword(0x28u);
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_3:
    v9 = *a3;
    v10 = a3[1];
    if ( a3[2] < v18 )
    {
      v24 = a3[1];
      n = v17;
      v20 = v18;
      v15 = qvector_reserve(a3, v9, v18, 1);
      v16 = v24;
      v17 = n;
      *a3 = v15;
      v9 = v15;
      v18 = v20;
      v10 = a3[1];
    }
    v23 = v16;
    na = v17;
    v19 = v18;
    memset((void *)(v9 + v10), 0, v18 - v10);
    v17 = na;
    v16 = v23;
    a3[1] = v19;
    goto LABEL_6;
  }
  return v27[0] - __readfsqword(0x28u);
}

