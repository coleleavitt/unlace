void __fastcall sub_B56ED0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 *v16; // rax
  int v17; // eax
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rbx
  bool v21; // al
  void *v22; // r14
  __int64 v23; // [rsp+0h] [rbp-68h]
  void *v24; // [rsp+0h] [rbp-68h]
  _QWORD v25[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a1;
  v8 = *(__int64 **)(*a1 + 168);
  v9 = 2LL * *(unsigned int *)(*a1 + 176);
  v10 = &v8[v9];
  if ( v8 != &v8[v9] )
  {
    while ( (unsigned __int64)*v8 <= 1 )
    {
      v8 += 2;
      if ( v10 == v8 )
        return;
    }
    if ( v10 != v8 )
    {
      v11 = *v8;
      while ( 1 )
      {
        v12 = v8[1];
        v13 = sub_B645B0(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL), v11);
        v14 = v13;
        v15 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL);
        v23 = *(_QWORD *)(*(_QWORD *)(v15 + 8840) + 8LL * (v13 >> 1));
        if ( (!(unsigned int)sub_8E7030(v15)
           || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v15 + 7488) + 56LL))(
                *(_QWORD *)(v15 + 7488),
                v23))
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL) + 8848LL) + v14) == 1
          && *(_BYTE *)v12 )
        {
          v17 = *(_DWORD *)(v12 + 52);
          v25[0] = 0;
          v25[1] = 0;
          v26[0] = 1;
          v18 = qword_1C7F2C0;
          v26[1] = 0;
          if ( v17 < 0 )
          {
            v24 = qword_1C7F2C0;
            sub_1830C40(qword_1C7F2C0, v25, (unsigned int)v17);
            v18 = v24;
          }
          else
          {
            LODWORD(v25[0]) = v17;
          }
          sub_182CBA0(v18, v26);
          BYTE4(v26[0]) &= ~1u;
          v19 = qword_1C7F2C0;
          LODWORD(v26[0]) = 1;
          if ( (v25[0] & 0x100000000LL) != 0 || (*(_BYTE *)(v12 + 12) & 1) != 0 )
          {
            if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v25, v12 + 8) )
              goto LABEL_22;
          }
          else if ( LODWORD(v25[0]) != *(_DWORD *)(v12 + 8) )
          {
            goto LABEL_22;
          }
          if ( (v26[0] & 0x100000000LL) != 0 || (*(_BYTE *)(v12 + 28) & 1) != 0 )
            v21 = (unsigned int)sub_182C7B0(v19, v26, v12 + 24) == 0;
          else
            v21 = LODWORD(v26[0]) == *(_DWORD *)(v12 + 24);
          v22 = qword_1C7F2C0;
          if ( !v21 )
          {
LABEL_22:
            v20 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v25);
            sub_182CBA0(v20, v26);
            sub_1875640("models for BAPA is TBD", a7);
            return;
          }
          sub_182CBA0(qword_1C7F2C0, v25);
          sub_182CBA0(v22, v26);
        }
        v16 = v8 + 2;
        if ( v10 != v8 + 2 )
        {
          while ( 1 )
          {
            v11 = *v16;
            v8 = v16;
            if ( (unsigned __int64)*v16 > 1 )
              break;
            v16 += 2;
            if ( v10 == v16 )
              return;
          }
          if ( v10 != v16 )
            continue;
        }
        return;
      }
    }
  }
}

