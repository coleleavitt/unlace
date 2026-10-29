void __fastcall sub_183ED20(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6,
        unsigned int *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  void *v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 *v14; // r14
  __int64 *v15; // rbp
  __int64 v16; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v18[32]; // [rsp+10h] [rbp-78h] BYREF
  int v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  __int128 v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+58h] [rbp-30h]

  if ( a2 )
  {
    v9 = a2;
    v10 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v10 == 71 )
    {
      v9 = *(_QWORD *)(a2 + 48);
      v10 = *(_BYTE *)(v9 + 28) & 0x7F;
    }
    if ( (unsigned int)v10 - 34 <= 5 )
    {
      v22 = 0;
      ptr[0] = v18;
      ptr[1] = (void *)0x400000000LL;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v23 = 0;
      sub_183EAE0(a1, 1, a3, a5, a6, a9, a7, a8, (__int64)ptr, (__int64)&v19);
      sub_A823F0(*(_QWORD *)(a1 + 248), v9, (__int64)&v19, 1);
      if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 35 > 3 )
        goto LABEL_9;
      if ( sub_B979F0((_QWORD *)v9) )
        sub_183E600(a1, v9);
      if ( !sub_AED5B0(v9) || (v12 = sub_B98510(v9), v14 = v13, v15 = (__int64 *)v12, (__int64 *)v12 == v13) )
      {
LABEL_9:
        v11 = ptr[0];
        if ( ptr[0] == v18 )
          return;
      }
      else
      {
        do
        {
          v16 = *v15++;
          sub_18B4F10(a1, v9, v16);
        }
        while ( v14 != v15 );
        v11 = ptr[0];
        if ( ptr[0] == v18 )
          return;
      }
      free(v11);
    }
  }
}
