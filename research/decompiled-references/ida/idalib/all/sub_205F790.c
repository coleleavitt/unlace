__int64 __fastcall sub_205F790(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  int v8; // eax
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = a1;
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 8) - 17 <= 1 )
    a1 = **(_QWORD **)(a1 + 16);
  v3 = sub_20C2F60(a1);
  v5 = sub_21F90D0(a1, a2, v4);
  v6 = v5;
  if ( v3 == v5 )
  {
    sub_21FFC40(v11, v5, 0);
    a2 = (unsigned __int8)a2;
    if ( v11[0] != v6 )
      goto LABEL_5;
  }
  else
  {
    sub_21FD1F0(v11, v3, 0);
    a2 = (unsigned __int8)a2;
    if ( v11[0] != v6 )
    {
LABEL_5:
      sub_21FB9A0(v11, a2);
      goto LABEL_6;
    }
  }
  sub_2200250(v11, a2);
LABEL_6:
  v7 = sub_2055C80(*(_QWORD **)v2, v11);
  v8 = *(unsigned __int8 *)(v2 + 8);
  if ( (unsigned int)(v8 - 17) <= 1 )
  {
    BYTE4(v10) = (_BYTE)v8 == 18;
    LODWORD(v10) = *(_DWORD *)(v2 + 32);
    v7 = sub_205EF10(v10, v7);
  }
  sub_9955A0(v11);
  return v7;
}
