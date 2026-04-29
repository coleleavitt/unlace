char __fastcall sub_11AB20(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 a3)
{
  __int64 v3; // rbp
  unsigned __int8 v4; // cl
  __int64 v5; // rax
  unsigned __int8 *v6; // rbx
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int8 v12; // r12
  _BYTE *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-68h] BYREF
  unsigned __int8 *v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  char v21; // [rsp+28h] [rbp-40h]
  unsigned __int8 *v22; // [rsp+30h] [rbp-38h]
  unsigned __int8 v23; // [rsp+38h] [rbp-30h]
  unsigned __int64 v24; // [rsp+48h] [rbp-20h]

  while ( 1 )
  {
    v3 = (__int64)a1;
    v4 = *a2;
    v5 = *a1;
    v24 = __readfsqword(0x28u);
    v6 = a2;
    if ( (unsigned __int8)(v4 - 14) > 1u )
      goto LABEL_6;
    if ( (unsigned __int8)(v5 - 14) > 1u )
    {
      v3 = (__int64)a2;
      v5 = v4;
      v6 = a1;
LABEL_6:
      switch ( v5 )
      {
        case 1LL:
          result = 0;
          if ( *v6 == 1 )
          {
            v15 = *(int *)(v3 + 4);
            v9 = *((int *)v6 + 1);
            result = v9 != 0 && v15 != 0;
            if ( result )
            {
              v10 = *(int *)(v3 + 8);
              v11 = *((int *)v6 + 2);
              result = 0;
              if ( v15 + v10 - 1 >= v11 )
                return v9 + v11 - 1 >= v10;
            }
          }
          return result;
        case 4LL:
          v13 = *(_BYTE **)(v3 + 8);
          v17 = nullptr;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v16 = &off_4B00E0;
          v22 = v6;
          v23 = a3;
          return (unsigned int)sub_11A440(v13, (__int64)&v16) != 0;
        case 5LL:
          result = 0;
          if ( *v6 == 5 )
          {
            v14 = *(int *)(v3 + 4);
            v9 = *((int *)v6 + 1);
            result = v9 != 0 && v14 != 0;
            if ( result )
            {
              v11 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL);
              v10 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL);
              result = 0;
              if ( v14 + v10 - 1 >= v11 )
                return v9 + v11 - 1 >= v10;
            }
          }
          return result;
        case 6LL:
          result = 0;
          if ( *v6 == 6 )
          {
            v8 = *(int *)(v3 + 4);
            v9 = *((int *)v6 + 1);
            result = v9 != 0 && v8 != 0;
            if ( result )
            {
              v10 = *(_QWORD *)(v3 + 8);
              v11 = *((_QWORD *)v6 + 1);
              result = 0;
              if ( v8 + v10 - 1 >= v11 )
                return v9 + v11 - 1 >= v10;
            }
          }
          return result;
        case 8LL:
          if ( !under_debugger )
            sub_37DDE0(50285);
          BUG();
        case 9LL:
          result = 0;
          if ( *v6 == 9 )
            return *(_DWORD *)(*(_QWORD *)(v3 + 8) + 16LL) == *(_DWORD *)(*((_QWORD *)v6 + 1) + 16LL);
          return result;
        case 14LL:
          goto LABEL_15;
        case 15LL:
          goto LABEL_4;
        default:
          return 0;
      }
    }
    if ( (_BYTE)v5 == 15 )
      break;
LABEL_15:
    v12 = a3;
    result = sub_11AB20(*(_QWORD *)(v3 + 8), v6, a3);
    if ( result )
      return result;
    a3 = v12;
    a2 = v6;
    a1 = (unsigned __int8 *)(*(_QWORD *)(v3 + 8) + 16LL);
  }
LABEL_4:
  v17 = v6;
  v16 = &off_4B00B8;
  LOBYTE(v18) = a3;
  return (unsigned int)sub_11A080(v3, (__int64)&v16) != 0;
}
