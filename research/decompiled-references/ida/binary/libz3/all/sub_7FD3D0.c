__int64 __fastcall sub_7FD3D0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  _DWORD *v3; // rax
  void *v4; // rbx
  __int64 v6; // r13
  __int64 v8; // r15
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _DWORD *v12; // rax
  bool v13; // r15
  __int64 v14; // rdi
  unsigned int *v15; // r13
  unsigned int v16; // r13d
  unsigned int v17; // eax
  char v18; // [rsp+Fh] [rbp-79h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF
  char v21[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_WORD *)(a2 + 4) == 0;
  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  if ( v2 )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
    {
      if ( *v3 == 5 && v3[1] == 8 && *(_DWORD *)(a2 + 24) == 1 )
      {
        v6 = a1 + 16;
        if ( (unsigned __int8)sub_1666AE0(a1 + 16, *(_QWORD *)(a2 + 32), v19, &v18) )
        {
          v8 = sub_15D1F10(a2);
          sub_3EBD70((__int64)v21, (__int64)v19);
          v12 = *(_DWORD **)(v8 + 24);
          v13 = 0;
          if ( v12 && *v12 == 5 )
            v13 = v12[1] == 1;
          v14 = *(_QWORD *)(a1 + 24);
          if ( !v14 )
          {
            sub_16669E0(v6);
            v14 = *(_QWORD *)(a1 + 24);
          }
          v15 = (unsigned int *)sub_166A700(v14, (unsigned int)v21, v13, v9, v10, v11);
          sub_25A130(v21);
          *(_QWORD *)v21 = v15;
          if ( v15 )
            ++v15[2];
          sub_7F6FA0((_QWORD *)(a1 + 40), v21);
          v16 = sub_7FD040(a1, v15);
          v17 = sub_7FD040(a1, (unsigned int *)a2);
          sub_5F18A0((unsigned int **)(a1 + 48), v17, v16);
        }
      }
    }
  }
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  return sub_182CBA0(v4, v20);
}

