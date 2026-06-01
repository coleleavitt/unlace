__int64 __fastcall sub_1524220(__int64 a1, _BYTE *a2, signed __int64 a3, unsigned int a4)
{
  unsigned int v7; // eax
  unsigned __int16 v8; // r15
  unsigned int v9; // r14d
  char v10; // al
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int *v14; // rax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  unsigned int v18; // [rsp+Ch] [rbp-9Ch]
  size_t n; // [rsp+10h] [rbp-98h]
  void *s1; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v21[17]; // [rsp+20h] [rbp-88h] BYREF

  v7 = sub_1569A00(a1, 22, 2192, a2, a3);
  if ( (_BYTE)v7 )
    return 0;
  v8 = *(_WORD *)(a1 + 32);
  v9 = v7;
  v18 = 1;
  if ( v8 == 5 )
  {
    v14 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
    s1 = v14 + 4;
    n = *v14;
    if ( j__strlen("push") == n )
    {
      if ( !n || !memcmp(s1, "push", n) )
      {
        sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
        if ( !(unsigned __int8)sub_1569A00(a1, 66, 2195, a2, a3) )
        {
          v8 = *(_WORD *)(a1 + 32);
          v18 = 2;
          goto LABEL_3;
        }
        return 0;
      }
      if ( n != j__strlen("pop") )
        goto LABEL_3;
    }
    else
    {
      if ( n != j__strlen("pop") )
        goto LABEL_3;
      if ( !n )
      {
LABEL_17:
        v16 = 0;
        sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
        v18 = 4;
LABEL_20:
        if ( !(unsigned __int8)sub_1569A00(a1, 23, 2196, a2, a3) && !(unsigned __int8)sub_1569A00(a1, 1, 2202, a2, a3) )
        {
          v17 = v16;
          v9 = 1;
          sub_166A570(*(_QWORD *)(a1 + 96), a4, v18, v17);
          return v9;
        }
        return 0;
      }
    }
    if ( memcmp(s1, "pop", n) )
    {
      v18 = 1;
      goto LABEL_3;
    }
    goto LABEL_17;
  }
LABEL_3:
  v10 = sub_141A630(v8);
  v11 = *(__int64 **)(a1 + 8);
  if ( v8 != 1 && !v10 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 16);
      if ( (unsigned int)*(_QWORD *)v13 == 3 )
      {
        if ( *(_WORD *)(v13 + 16) == 26223 && *(_BYTE *)(v13 + 18) == 102 )
        {
          v16 = 0;
          sub_14634E0(v11, (int *)(a1 + 16));
          goto LABEL_20;
        }
      }
      else if ( (unsigned int)*(_QWORD *)v13 == 2 && *(_WORD *)(v13 + 16) == 28271 )
      {
        v16 = 1;
        sub_14634E0(v11, (int *)(a1 + 16));
        goto LABEL_20;
      }
    }
  }
  sub_FC70B0((__int64)v21, v11[6], *(_DWORD *)(a1 + 16), 2207);
  sub_AEC220(v21, a2, a3);
  sub_AEA040((__int64)v21);
  return v9;
}
