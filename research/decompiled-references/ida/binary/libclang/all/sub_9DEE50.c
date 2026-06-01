__int64 __fastcall sub_9DEE50(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebp
  char v10; // al
  __int64 v11; // [rsp+8h] [rbp-40h]
  _DWORD v12[11]; // [rsp+1Ch] [rbp-2Ch] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_DWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v5 = *(_QWORD *)(a1 + 184);
  v12[0] = v4;
  v6 = sub_A1A5A0(v5, 56);
  v7 = *(_DWORD *)(v6 + 48);
  if ( v7 )
  {
    if ( v7 == 2 )
    {
      if ( !*(_QWORD *)(v6 + 24) )
        goto LABEL_3;
    }
    else if ( v7 != 3 && !*(_QWORD *)(v6 + 32) && !*(_QWORD *)v6 )
    {
      goto LABEL_3;
    }
  }
  else if ( !*(_QWORD *)(v6 + 24) )
  {
    goto LABEL_3;
  }
  if ( v4 )
  {
    v11 = v6;
    v10 = sub_9D4C70(a1, a2, v6);
    v6 = v11;
    if ( !v10 )
      return 0;
  }
LABEL_3:
  v8 = sub_9417C0(a1, a2, v12, v6, 0);
  if ( !(_BYTE)v8 )
    return 0;
  sub_9C74F0(a1);
  return v8;
}

