__int64 __fastcall sub_F3E10(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v7; // rdx
  _QWORD **v8; // rbx
  __int64 v9; // r13
  unsigned int v10; // ebp
  _QWORD *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  _QWORD *v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-70h]
  _QWORD *v24; // [rsp+10h] [rbp-68h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  _QWORD *v27; // [rsp+30h] [rbp-48h]

  v4 = a1;
  if ( (unsigned __int8)sub_13BCE0() )
  {
    if ( sub_9FED0() )
    {
      v7 = *(_QWORD *)(a3 + 8);
      if ( v7 + 24LL * *(_QWORD *)(a3 + 16) != v7 )
      {
        v25 = v7 + 24LL * *(_QWORD *)(a3 + 16);
        v26 = a3;
        while ( 1 )
        {
          v8 = *(_QWORD ***)v7;
          v9 = *(_QWORD *)v7 + 8LL * *(_QWORD *)(v7 + 8);
          if ( v9 == *(_QWORD *)v7 )
            goto LABEL_18;
          v23 = v7;
          do
          {
            while ( 1 )
            {
              v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v8 + 128LL))(**v8);
              if ( (unsigned __int8)sub_A1AA0(v10, 1) )
                break;
              if ( (unsigned __int8)sub_A1AA0(v10, 0) )
                goto LABEL_14;
LABEL_9:
              if ( (_QWORD **)v9 == ++v8 )
                goto LABEL_17;
            }
            v11 = (_QWORD *)operator new(0x18u);
            v12 = a2[2];
            v13 = *a2;
            v14 = v11;
            v27 = v11;
            *v11 = *v8;
            v15 = a2[1];
            v27[1] = 0x5000000000LL;
            v27[2] = -1;
            if ( v12 < v15 + 1 )
            {
              v24 = v14;
              v21 = qvector_reserve();
              v14 = v24;
              *a2 = v21;
              v13 = v21;
              v15 = a2[1];
            }
            *(_QWORD *)(v13 + 8 * v15) = v14;
            ++a2[1];
            if ( !(unsigned __int8)sub_A1AA0(v10, 0) )
              goto LABEL_9;
LABEL_14:
            v16 = (_QWORD *)operator new(0x18u);
            v17 = a2[2];
            v18 = *a2;
            v19 = v16;
            *v16 = *v8;
            v16[1] = 0x5100000000LL;
            v16[2] = -1;
            v20 = a2[1];
            if ( v17 < v20 + 1 )
            {
              v22 = qvector_reserve();
              *a2 = v22;
              v18 = v22;
              v20 = a2[1];
            }
            ++v8;
            *(_QWORD *)(v18 + 8 * v20) = v19;
            ++a2[1];
          }
          while ( (_QWORD **)v9 != v8 );
LABEL_17:
          v7 = v23;
LABEL_18:
          v7 += 24;
          if ( v25 == v7 )
          {
            v4 = a1;
            a3 = v26;
            return sub_157CD0(v4, a2, a3);
          }
        }
      }
    }
  }
  return sub_157CD0(v4, a2, a3);
}

