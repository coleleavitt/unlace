__int64 __fastcall sub_860D20(_QWORD *a1)
{
  __int64 v2; // rdx
  char *v3; // rax
  _BYTE *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 (*v10)(void); // rax
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rbp
  __int64 v15; // [rsp+0h] [rbp-B8h]
  __int64 v16; // [rsp+10h] [rbp-A8h]
  __int64 v17; // [rsp+18h] [rbp-A0h]
  unsigned int v18; // [rsp+20h] [rbp-98h]
  unsigned __int8 v19; // [rsp+27h] [rbp-91h]
  void *v20; // [rsp+30h] [rbp-88h] BYREF
  __int64 v21; // [rsp+38h] [rbp-80h]
  _BYTE v22[120]; // [rsp+40h] [rbp-78h] BYREF

  v20 = v22;
  v21 = 0x1000000000LL;
  sub_875FD0();
  sub_860920((__int64)a1, (__int64)&v20);
  v18 = v21 - 1;
  if ( (_DWORD)v21 )
  {
    v19 = 0;
    v2 = a1[11];
    v17 = 4LL * (unsigned int)(v21 - 1);
    v3 = (char *)v20;
    while ( 1 )
    {
      --v18;
      v4 = v3;
      v16 = 8LL * *(unsigned int *)&v3[v17];
      v15 = **(_QWORD **)(v2 + v16);
      if ( v18 == -1 )
        break;
      v5 = 4LL * v18;
      do
      {
        v6 = *(unsigned int *)&v3[v5];
        v7 = **(_QWORD **)(v2 + 8 * v6);
        v8 = sub_15D1F10(v15);
        if ( v8 == sub_15D1F10(v7) && !(unsigned __int8)sub_874440((int)a1) )
        {
          v9 = a1[10];
          v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 440LL);
          if ( (char *)v10 == (char *)sub_79F010 )
            v11 = v9 + 1592;
          else
            v11 = v10();
          if ( !(unsigned __int8)sub_13D4210(v11, *(_QWORD *)(a1[11] + v16), *(_QWORD *)(a1[11] + 8 * v6)) )
          {
            v12 = sub_7E58D0((__int64)a1, v15, v7);
            v13 = v12;
            sub_7F15F0(a1[10] + 160LL, v12);
            v19 |= *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * v13) == 0;
          }
        }
        v5 -= 4;
        v3 = (char *)v20;
        v2 = a1[11];
      }
      while ( v5 != -4 );
      v17 -= 4;
    }
  }
  else
  {
    v19 = 0;
    v4 = v20;
  }
  if ( v4 != v22 && v4 )
    sub_186B220(v4);
  return v19;
}

