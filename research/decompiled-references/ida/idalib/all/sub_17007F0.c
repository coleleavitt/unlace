unsigned __int64 __fastcall sub_17007F0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r13d
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 *v13; // r15
  __int64 *v14; // rbx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  _QWORD *v25; // [rsp-40h] [rbp-40h]

  if ( !a3 )
    return 0;
  v7 = a4;
  v8 = a2;
  v9 = a3;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 240) + 968LL) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 656) + 8LL)
                                                                             + 32LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 656) + 8LL),
      a1,
      (unsigned int)a4,
      a2,
      (unsigned int)a3,
      (unsigned int)a5);
    a3 = v25;
  }
  v10 = 0;
  v11 = a2 + 24LL * (_QWORD)v9;
  if ( a2 != v11 )
  {
    while ( 1 )
    {
      v12 = sub_15A60C0(v8, (_QWORD *)v7, (unsigned __int64)a3, a4, a5, a6);
      v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        break;
      v14 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_21;
      v15 = *v13;
      if ( (unsigned int)*(unsigned __int8 *)(*v13 + 16) - 43 <= 1
        || (v24 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v24 <= 1)
        && (v15 = sub_F63050(*v13, v7, v24, a4)) != 0 )
      {
        while ( 1 )
        {
          v16 = (*(_BYTE *)(v15 + 18) & 0x10) == 0;
          v17 = *(_QWORD *)(v15 + 32);
          if ( v16 )
            break;
          while ( 1 )
          {
            v15 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
            v18 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43;
            if ( (unsigned int)v18 <= 1 )
              break;
            v19 = sub_F63050(v15, v7, v18, a4);
            v16 = (*(_BYTE *)(v19 + 18) & 0x10) == 0;
            v17 = *(_QWORD *)(v19 + 32);
            if ( v16 )
              goto LABEL_12;
          }
        }
LABEL_12:
        v13 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v20 = *v14;
      if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 43 <= 1
        || (v23 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v23 <= 1)
        && (v20 = sub_F63050(*v14, v7, v23, a4)) != 0 )
      {
        while ( 1 )
        {
          v14 = (__int64 *)(*(_QWORD *)(v20 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v20 = *v14;
            v21 = (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 43;
            if ( (unsigned int)v21 <= 1 )
              break;
            v22 = sub_F63050(v20, v7, v21, a4);
            v14 = (__int64 *)(*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v22 + 18) & 0x10) == 0 )
              goto LABEL_17;
          }
        }
      }
LABEL_17:
      a3 = (_QWORD *)(v14[1] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *a3 != *(_QWORD *)(v13[1] & 0xFFFFFFFFFFFFFFF0LL) )
        return 0;
LABEL_18:
      v8 += 24;
      if ( v11 == v8 )
        return v10;
    }
    v12 = v10;
LABEL_21:
    v10 = v12;
    goto LABEL_18;
  }
  return v10;
}
