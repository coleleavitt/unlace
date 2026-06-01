__int64 __fastcall sub_91FE70(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v6; // r12
  unsigned int v7; // ebp
  bool v8; // si
  _BOOL8 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rbp
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  unsigned int v17; // eax
  unsigned int v18; // eax
  void *v19; // rax
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int8 v25; // al
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // eax
  void *v29; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+8h] [rbp-70h]
  void *v31; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+18h] [rbp-60h]
  void *v33; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-50h]
  void *v35; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v13 = sub_915550(v12);
      sub_91F910((__int64)&v35, v13, a3);
      goto LABEL_27;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v14 = sub_915900(v12);
      sub_91F9A0((__int64)&v35, v14, a3);
      goto LABEL_27;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v15 = sub_915930(v12);
      sub_91FA30((__int64)&v35, v15, a3);
      goto LABEL_27;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v16 = sub_915CE0(v12);
      sub_91FAC0((__int64)&v35, v16, a3);
      goto LABEL_27;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v17 = sub_915D10(v12);
      sub_91FB50((__int64)&v35, v17, a3);
      goto LABEL_27;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v18 = sub_9160C0(v12);
      sub_91FBE0((__int64)&v35, v18, a3);
      goto LABEL_27;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v19 = (void *)sub_9160F0(v12);
      sub_91FC70((__int64)&v35, v19, a3);
      goto LABEL_27;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v20 = (void *)sub_9164A0(v12);
      sub_91FD00((__int64)&v35, v20, a3);
LABEL_27:
      v21 = sub_A1A4E0(v12, 16);
      *(_DWORD *)(v21 + 8) = v36;
      *(_QWORD *)v21 = v35;
      return 1;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v22 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_919FD0((__int64)&v35, v22);
      sub_91FD90((__int64)&v33, (__int64)&v35, a3);
      goto LABEL_32;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v22 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_91A020((__int64)&v35, v22);
      sub_91FE00((__int64)&v33, (__int64)&v35, a3);
LABEL_32:
      v23 = sub_A1A4E0(v22, 16);
      *(_DWORD *)(v23 + 8) = v34;
      *(_QWORD *)v23 = v33;
      v34 = 0;
      if ( v36 > 0x40 )
      {
LABEL_33:
        if ( v35 )
          operator delete[](v35);
      }
      return 1;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v24 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a4;
        v25 = sub_8F4170(v24);
        v34 = a3;
        if ( a3 > 0x40 )
        {
          sub_2585A50(&v33, v25, 0);
          v36 = v34;
          if ( v34 <= 0x40 )
          {
            v32 = v34;
            v31 = v33;
          }
          else
          {
            sub_2585B30(&v35);
            v32 = v36;
            if ( v36 <= 0x40 )
            {
              v28 = v34;
              v31 = v35;
            }
            else
            {
              sub_2585B30(&v31);
              if ( v36 > 0x40 && v35 )
                operator delete[](v35);
              v28 = v34;
            }
            if ( v28 > 0x40 && v33 )
              operator delete[](v33);
          }
        }
        else
        {
          v32 = a3;
          v31 = (void *)v25;
        }
        v26 = sub_A1A4E0(v24, 16);
        *(_DWORD *)(v26 + 8) = v32;
        *(_QWORD *)v26 = v31;
      }
      return 1;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v6 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F5730((__int64)&v35, v6);
        v7 = v36;
        v8 = v36 <= 0x40 ? v35 == nullptr : v7 == (unsigned int)sub_2587400(&v35);
        v32 = a3;
        v9 = !v8;
        if ( a3 > 0x40 )
        {
          sub_2585A50(&v31, v9, 0);
          v34 = v32;
          if ( v32 <= 0x40 )
          {
            v30 = v32;
            v29 = v31;
          }
          else
          {
            sub_2585B30(&v33);
            v30 = v34;
            if ( v34 <= 0x40 )
            {
              v27 = v32;
              v29 = v33;
            }
            else
            {
              sub_2585B30(&v29);
              if ( v34 > 0x40 && v33 )
                operator delete[](v33);
              v27 = v32;
            }
            if ( v27 > 0x40 && v31 )
              operator delete[](v31);
          }
        }
        else
        {
          v30 = a3;
          v29 = (void *)v9;
        }
        v10 = sub_A1A4E0(v6, 16);
        v11 = v30;
        v30 = 0;
        *(_DWORD *)(v10 + 8) = v11;
        *(_QWORD *)v10 = v29;
        if ( v7 > 0x40 )
          goto LABEL_33;
      }
      return 1;
  }
}

