bool __fastcall sub_C2F580(__int64 *a1, unsigned __int64 *a2, _QWORD *a3)
{
  int v3; // ebp
  bool result; // al
  __int64 v6; // r14
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // r13d
  _QWORD *v12; // r15
  __int64 v13; // rdx
  bool v14; // al
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // [rsp+8h] [rbp-90h]
  int v23; // [rsp+14h] [rbp-84h]
  _QWORD v24[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD *v25; // [rsp+30h] [rbp-68h]
  __int64 v26; // [rsp+38h] [rbp-60h]
  _QWORD v27[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v6 = *a1;
    v8 = v3 - 1;
    v25 = nullptr;
    v24[0] = sub_A4F710();
    v24[1] = v9;
    v26 = 0;
    v27[2] = 0;
    v27[0] = sub_A4F720(a1, a2);
    v27[1] = v10;
    v27[3] = 0;
    v23 = 1;
    v22 = nullptr;
    v11 = v8 & sub_C2F3C0(a2, (__int64)(a2 + 2));
    while ( 1 )
    {
      v12 = (_QWORD *)(v6 + 40LL * v11);
      result = sub_A4F650(a2, v12);
      if ( result )
      {
        v15 = a2[3];
        if ( v15 == v12[3] )
        {
          v16 = (_QWORD *)a2[2];
          v17 = &v16[v15];
          if ( v16 == v17 )
            goto LABEL_18;
          v18 = (_QWORD *)v12[2];
          if ( *v18 == *v16 )
          {
            while ( 1 )
            {
              ++v16;
              ++v18;
              if ( v17 == v16 )
                break;
              if ( *v16 != *v18 )
                goto LABEL_5;
            }
LABEL_18:
            *a3 = v12;
            return result;
          }
        }
      }
LABEL_5:
      if ( sub_A4F650((_QWORD *)(v6 + 40LL * v11), v24) )
      {
        v13 = v12[3];
        if ( v13 == v26 )
        {
          v19 = (_QWORD *)v12[2];
          v20 = &v19[v13];
          if ( v19 == v20 )
            goto LABEL_24;
          v21 = v25;
          if ( *v25 == *v19 )
            break;
        }
      }
LABEL_7:
      v14 = sub_C0FAA0((_QWORD *)(v6 + 40LL * v11), v27);
      if ( !v22 )
      {
        if ( !v14 )
          v12 = nullptr;
        v22 = v12;
      }
      v11 = v8 & (v23 + v11);
      ++v23;
    }
    while ( 1 )
    {
      ++v19;
      ++v21;
      if ( v20 == v19 )
        break;
      if ( *v19 != *v21 )
        goto LABEL_7;
    }
LABEL_24:
    if ( v22 )
      v12 = v22;
    *a3 = v12;
    return 0;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
