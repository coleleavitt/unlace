_BOOL8 __fastcall sub_1440FF0(__int64 *a1, __int64 a2)
{
  _BOOL4 v2; // ebx
  __int64 v3; // rax
  unsigned int *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  int v7; // eax
  void *v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v12[2]; // [rsp+0h] [rbp-B8h] BYREF
  void *v13[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v16; // [rsp+50h] [rbp-68h]
  void *v17[2]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v18[32]; // [rsp+70h] [rbp-48h] BYREF
  int v19; // [rsp+90h] [rbp-28h]

  v2 = 0;
  v3 = sub_1440A00(a2, *a1);
  if ( v3 )
  {
    v4 = *(unsigned int **)(v3 + 16);
    v5 = *(_QWORD *)(*a1 + 64);
    v6 = *v4;
    v12[0] = v4 + 4;
    v12[1] = v6;
    sub_2246450(v13, v12);
    v15[0] = "---";
    v15[2] = v13;
    v16 = 1027;
    sub_22BA1B0(v17, v15);
    if ( v13[0] != &v14 )
      operator delete(v13[0]);
    v7 = v19;
    if ( !v19 )
    {
      v10 = sub_22B76B0(v17);
      if ( v11 != 7 || *(_DWORD *)v10 != 1852534389 || *(_WORD *)(v10 + 4) != 30575 || *(_BYTE *)(v10 + 6) != 110 )
      {
        v8 = v17[0];
        v2 = 0;
        if ( v17[0] == v18 )
          return v2;
        goto LABEL_6;
      }
      v7 = v19;
    }
    v8 = v17[0];
    v2 = *(_DWORD *)(v5 + 264) == v7;
    if ( v17[0] != v18 )
LABEL_6:
      operator delete(v8);
  }
  return v2;
}
