__int64 __fastcall sub_27D980(_BYTE *a1, __int64 *a2, __int64 a3)
{
  _BYTE *v4; // rbp
  __int64 v6; // rcx
  __int64 **v7; // r8
  __int64 v9; // rdx
  _QWORD **v10; // rbx
  __int64 v11; // r13
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  _QWORD *v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  _QWORD *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-70h]
  _QWORD *v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+18h] [rbp-60h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  _QWORD *v29; // [rsp+30h] [rbp-48h]

  v4 = a1;
  if ( (unsigned __int8)sub_331080(a1) )
  {
    if ( sub_20EBC0() )
    {
      v9 = *(_QWORD *)(a3 + 8);
      v6 = v9 + 24LL * *(_QWORD *)(a3 + 16);
      if ( v6 != v9 )
      {
        v27 = v9 + 24LL * *(_QWORD *)(a3 + 16);
        v28 = a3;
        while ( 1 )
        {
          v10 = *(_QWORD ***)v9;
          v11 = *(_QWORD *)v9 + 8LL * *(_QWORD *)(v9 + 8);
          if ( v11 == *(_QWORD *)v9 )
            goto LABEL_18;
          v25 = v9;
          do
          {
            while ( 1 )
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v10 + 128LL))(**v10);
              if ( (unsigned __int8)sub_210620(v12, 1) )
                break;
              if ( (unsigned __int8)sub_210620(v12, 0) )
                goto LABEL_14;
LABEL_9:
              if ( (_QWORD **)v11 == ++v10 )
                goto LABEL_17;
            }
            v13 = (_QWORD *)operator new(0x18u);
            v14 = a2[2];
            v15 = *a2;
            v16 = v13;
            v29 = v13;
            *v13 = *v10;
            v17 = a2[1];
            v29[1] = 0x5000000000LL;
            v29[2] = -1;
            if ( v14 < v17 + 1 )
            {
              v26 = v16;
              v23 = qvector_reserve(a2, v15, v17 + 1, 8);
              v16 = v26;
              *a2 = v23;
              v15 = v23;
              v17 = a2[1];
            }
            *(_QWORD *)(v15 + 8 * v17) = v16;
            ++a2[1];
            if ( !(unsigned __int8)sub_210620(v12, 0) )
              goto LABEL_9;
LABEL_14:
            v18 = (_QWORD *)operator new(0x18u);
            v19 = a2[2];
            v20 = *a2;
            v21 = v18;
            *v18 = *v10;
            v18[1] = 0x5100000000LL;
            v18[2] = -1;
            v22 = a2[1];
            if ( v19 < v22 + 1 )
            {
              v24 = qvector_reserve(a2, v20, v22 + 1, 8);
              *a2 = v24;
              v20 = v24;
              v22 = a2[1];
            }
            ++v10;
            *(_QWORD *)(v20 + 8 * v22) = v21;
            ++a2[1];
          }
          while ( (_QWORD **)v11 != v10 );
LABEL_17:
          v9 = v25;
LABEL_18:
          v9 += 24;
          if ( v27 == v9 )
          {
            v4 = a1;
            a3 = v28;
            return sub_1EC860(v4, a2, a3, v6, v7);
          }
        }
      }
    }
  }
  return sub_1EC860(v4, a2, a3, v6, v7);
}
