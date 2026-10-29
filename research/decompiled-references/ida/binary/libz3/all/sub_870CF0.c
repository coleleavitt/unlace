__int64 __fastcall sub_870CF0(__int64 a1, unsigned int *a2)
{
  int *v2; // rax
  char *v3; // rdx
  unsigned int v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rcx
  unsigned int v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v17[0] = 0;
  v15 = 0;
  v16 = 0;
  if ( !(unsigned __int8)sub_1674350(a1 + 128, a2, &v15, &v16, v17) )
  {
    sub_1872CE0("");
    sub_1873130(114, 640);
  }
  v2 = (int *)sub_7E4F00(a1, a2);
  v3 = (char *)(v2 + 22);
  if ( v2[22] >> 8 == -1 )
  {
LABEL_17:
    v5 = 0x7FFFFFFF8LL;
    v4 = -1;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 12) != *v3 )
    {
      v3 = *((char **)v3 + 1);
      if ( !v3 )
        goto LABEL_17;
    }
    v4 = *(int *)v3 >> 8;
    v5 = 8LL * v4;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v6 )
  {
    v7 = **(unsigned int **)(*(_QWORD *)v2 + 32LL);
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 - 4) )
      v6 = 0;
    else
      v6 = *(_QWORD *)(v6 + 8 * v7);
  }
  v8 = sub_86BFC0((unsigned int *)a1, v6);
  v9 = *(_QWORD *)(a1 + 600);
  v10 = *(_QWORD *)(v9 + v5);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = v15;
  if ( v16 >= v15 )
  {
    v12 = 8LL * v8;
    while ( 1 )
    {
      v13 = v11++;
      sub_86FA40(a1, v4, *(_DWORD *)(*(_QWORD *)(v9 + v12) + 4 * v13));
      if ( v16 < v11 )
        break;
      v9 = *(_QWORD *)(a1 + 600);
    }
  }
  return sub_813420((_QWORD *)a1, v4);
}

