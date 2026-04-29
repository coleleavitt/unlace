__int64 __fastcall sub_67640(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rdi
  _OWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 func; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  _BYTE v16[4]; // [rsp+Ch] [rbp-DCh] BYREF
  __int128 v17; // [rsp+10h] [rbp-D8h] BYREF
  _BYTE v18[32]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-A8h] BYREF
  _OWORD v20[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v22; // [rsp+A8h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a3 + 8);
  if ( v3 == -1 )
  {
    return 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 32);
    v17 = 0;
    sub_945B0(v5, &v17, 2);
    sub_89A30(v18, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 256LL), &v17);
    v7 = v20;
    memset(v20, 0, sizeof(v20));
    v21 = 0;
    if ( (unsigned __int8)sub_851D0(v18, v20, v3) && (func = get_func(v3, v20, v8, v9)) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(_QWORD *)(a1 + 16);
      v19[1] = func;
      v15 = *(_QWORD *)(v13 + 256);
      v19[3] = v14;
      v19[0] = &off_C8940;
      v19[2] = v15;
      v7 = a2;
      v10 = sub_89840(v19, a2, v16, v13, v20, v3);
    }
    else
    {
      v10 = 0;
    }
    sub_85110(v18, v7);
    sub_84A10(&v17);
  }
  return v10;
}
