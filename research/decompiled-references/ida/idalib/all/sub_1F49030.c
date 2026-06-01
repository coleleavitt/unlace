void __fastcall sub_1F49030(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  char v5; // r13
  _QWORD *v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 *v15; // rdi
  __int64 v16; // r9
  __int64 *v17; // rdi
  _QWORD *v18[2]; // [rsp+10h] [rbp-88h] BYREF
  char v19; // [rsp+20h] [rbp-78h]
  _BYTE v20[16]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-58h]

  v2 = (__int64 *)a2;
  sub_1F48A90((__int64)v18, a1, a2);
  v3 = a1[2];
  v4 = v18[1];
  v5 = v19;
  v6 = *(_QWORD **)(v3 + 8);
  v7 = sub_1EE13A0((__int64)v6, *(_QWORD *)(v3 + 16), (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
  v12 = sub_1EDB980(v6, v7, v8, v9, v10, v11);
  if ( v12 )
  {
    *(_QWORD *)(a2 + 88) = v12;
  }
  else
  {
    if ( a2 )
      v2 = (__int64 *)(a2 + 64);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
      && (((unsigned __int8)*v2 | (unsigned __int8)(*v2 >> 1)) & 1) != 0 )
    {
      v14 = (__int64)(v2 - 8);
      if ( v18[0] )
      {
        v15 = a1 + 1;
        if ( v2 != (__int64 *)&dword_40 )
          v14 = (__int64)v2;
        if ( !v5 )
          v4 = nullptr;
        sub_1F3D810(v15, v14, v18[0], (__int64)v4, (__int64)v18[0], v13);
      }
      else
      {
        sub_1F43500((__int64)v20, (__int64)a1, (__int64)(v2 - 8));
        if ( v21 && (*((_BYTE *)v21 + 28) & 0x7Fu) - 64 <= 2 )
        {
          v17 = a1 + 1;
          if ( v2 != (__int64 *)&dword_40 )
            v14 = (__int64)v2;
          if ( !v5 )
            v4 = nullptr;
          sub_1F3D810(v17, v14, v21, (__int64)v4, 0, v16);
        }
        sub_1F42E40((__int64)v20);
      }
    }
  }
}
