void __fastcall sub_B065C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v5; // r13
  int v6; // ecx
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r15
  unsigned int *v10; // rdx
  char v11; // si
  _QWORD v12[4]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v13[11]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int *)(a2 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 8848) + v3) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 8840) + 8LL * ((unsigned int)v3 >> 1));
    if ( !(unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16))
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 7488) + 56LL))(
           *(_QWORD *)(v2 + 7488),
           v5) )
    {
      v12[0] = 0;
      v12[1] = 0;
      v12[2] = 1;
      v12[3] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v12, &qword_1C7F2A0);
      v13[0] = 0;
      v13[1] = 0;
      v13[2] = 1;
      v13[3] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v13, &qword_1C7F2A0);
      v6 = *(_DWORD *)(a2 + 8);
      v7 = 0;
      v8 = *(_QWORD *)(a2 + 40LL * (v6 & 1) + 16);
      if ( v8 )
      {
        while ( 1 )
        {
          if ( v7 >= *(_DWORD *)(v8 - 4) )
            goto LABEL_12;
          v9 = 40LL * v7;
          v10 = (unsigned int *)(v9 + v8);
          v11 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *v10);
          if ( !v11 )
            goto LABEL_10;
          if ( v11 == 1 )
            break;
LABEL_11:
          ++v7;
          v8 = *(_QWORD *)(a2 + 40LL * (v6 & 1) + 16);
          if ( !v8 )
            goto LABEL_12;
        }
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v12, (__int64)(v10 + 2), (__int64)v12);
        v6 = *(_DWORD *)(a2 + 8);
LABEL_10:
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v13, *(_QWORD *)(a2 + 40LL * (v6 & 1) + 16) + v9 + 8, (__int64)v13);
        v6 = *(_DWORD *)(a2 + 8);
        goto LABEL_11;
      }
LABEL_12:
      sub_25A130((char *)v13);
      sub_25A130((char *)v12);
    }
  }
}

