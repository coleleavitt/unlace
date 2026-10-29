__int64 __fastcall sub_1FBF160(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax
  __int64 v33; // r13
  __int64 *v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // [rsp+8h] [rbp-40h]
  __int64 v40[6]; // [rsp+18h] [rbp-30h] BYREF

  sub_1FBEF80(a1, (__int64)a2, a3, a4, a5, a6);
  v8 = sub_B97230((__int64)a2);
  if ( v8 )
  {
    v9 = v8;
    sub_9B9C90(*(_QWORD *)(a1 + 24), 1);
    sub_1F92A90(*(_QWORD *)(a1 + 16), v9, *(_QWORD *)(a1 + 24));
  }
  else
  {
    v16 = sub_B97210((__int64)a2);
    if ( v16 )
    {
      sub_9B9C90(*(_QWORD *)(a1 + 24), 2);
      sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
      sub_9B9C90(*(_QWORD *)(a1 + 24), ((*(__int64 *)v16 >> 1) & 3) + 1);
      sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v16 + 8), *(_QWORD *)(a1 + 24));
    }
    else
    {
      v17 = a2[16];
      v18 = *(_QWORD *)(a1 + 24);
      if ( v17 && (*(_BYTE *)(v17 + 10) & 0x20) != 0 )
      {
        v19 = 3;
        sub_9B9C90(v18, 3);
        v20 = sub_B970F0((__int64)a2);
        if ( v20 )
        {
          sub_1F92A90(*(_QWORD *)(a1 + 16), v20, *(_QWORD *)(a1 + 24));
          v19 = *(unsigned int *)(a2[16] + 112LL);
          sub_9B9C90(*(_QWORD *)(a1 + 24), v19);
        }
        else
        {
          sub_1FB1190(*(_QWORD *)(a1 + 24));
        }
        v21 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (a2[2] & 4) != 0 )
          v21 = *(_QWORD *)v21;
        if ( v21 )
        {
          if ( (*(_BYTE *)(v21 + 8) & 0x7Fu) - 34 <= 5 )
          {
            v22 = v21 - 72;
            if ( v21 != 72 )
            {
              if ( (unsigned __int8)sub_B8E180(v21) )
              {
                if ( (v26 = *(_QWORD *)(v21 + 8), (*(_BYTE *)(v21 + 10) & 0x40) != 0) && (v26 & 0x2000000) == 0
                  || (v26 & 0x2000000) != 0
                  || (*(_BYTE *)(v21 + 11) & 8) == 0 && ((*(_BYTE *)(v21 + 56) & 1) != 0 || *(_QWORD *)(v21 + 56))
                  || (*(_BYTE *)(v21 + 11) & 0x40) != 0
                  || (v38 = HIDWORD(v26), (v38 & 0x20) != 0)
                  || (v38 & 0x40) != 0
                  || sub_B8CF80(v21 - 72, v19, *(_BYTE *)(v21 + 11) & 0x40, v23, v24, v25) )
                {
                  v27 = *(_QWORD *)a1;
                  v40[0] = sub_1F92240(*(_QWORD *)a1, v22);
                  v32 = sub_1FB65C0(v27 + 728, v40, v28, v29, v30, v31);
                  v33 = *(_QWORD *)a1;
                  v34 = v32;
                  v35 = sub_B96F60((__int64)a2);
                  v36 = sub_1F92240(v33, v35);
                  v37 = *((unsigned int *)v34 + 2);
                  if ( v37 + 1 > (unsigned __int64)*((unsigned int *)v34 + 3) )
                  {
                    v39 = v36;
                    sub_2237220(v34, v34 + 2, v37 + 1, 8);
                    v37 = *((unsigned int *)v34 + 2);
                    v36 = v39;
                  }
                  *(_QWORD *)(*v34 + 8 * v37) = v36;
                  ++*((_DWORD *)v34 + 2);
                }
              }
            }
          }
        }
      }
      else
      {
        sub_1FB1190(v18);
      }
    }
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), (a2[9] >> 16) & 1LL);
  result = a2[9];
  if ( (result & 0x10000) != 0
    && (sub_1FA1600((__int64 *)(a1 + 8), (__int64)a2, v10, v11, v12, v13), result = a2[9], (result & 0x10000) != 0) )
  {
    if ( sub_B8DA40((__int64)a2) )
      sub_1F92A90(*(_QWORD *)a1, (__int64)a2, *(_QWORD *)a1 + 2000LL);
    result = a2[9];
    if ( (result & 0x10000) != 0 )
      goto LABEL_10;
  }
  else if ( (result & 0x10000) != 0 )
  {
LABEL_10:
    v15 = sub_EDC250(*(_QWORD *)(a1 + 8), (__int64)a2, v10, v11, v12, v13);
    result = sub_1F92A90(*(_QWORD *)(a1 + 16), v15, *(_QWORD *)(a1 + 24));
  }
  *(_DWORD *)(a1 + 224) = 99;
  return result;
}
