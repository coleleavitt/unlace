__int64 __fastcall sub_AC35B0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 result; // rax
  struct _Unwind_Exception *v10; // [rsp+0h] [rbp-38h] BYREF
  char v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+10h] [rbp-28h]
  char v13; // [rsp+18h] [rbp-20h]
  __int64 v14; // [rsp+20h] [rbp-18h]
  char v15; // [rsp+28h] [rbp-10h]

  if ( !(unsigned __int8)sub_AB8AD0(a1, a2) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v8 )
    {
      switch ( *(_DWORD *)(v8 + 4) )
      {
        case 0:
          sub_AC3200(a1, (unsigned int *)a2, v4, v5, v6, v7);
          return 1;
        case 3:
          sub_ABE050(a1, (unsigned int *)a2);
          return 1;
        case 4:
          sub_ABE850(a1, (unsigned int *)a2);
          return 1;
        case 5:
          sub_ABDE00(a1, (unsigned int *)a2);
          return 1;
        case 6:
          sub_ABEB50(a1, (unsigned int *)a2);
          return 1;
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
          return 0;
        case 0x11:
          sub_ABF060(a1, v10, v11, v12, v13, v14, v15);
          return 1;
        case 0x12:
          sub_ABEE50(a1, (unsigned int *)a2);
          return 1;
        case 0x13:
          sub_ABF480(a1, (unsigned int *)a2);
          return 1;
        case 0x14:
          sub_ABF270(a1, (unsigned int *)a2);
          return 1;
        case 0x15:
          sub_ABF690(a1, (unsigned int *)a2);
          return 1;
        case 0x1E:
          sub_AC02F0(a1, (unsigned int *)a2);
          return 1;
        case 0x1F:
          sub_AC05F0(a1, (unsigned int *)a2);
          return 1;
        case 0x20:
          sub_ABE250(a1, (unsigned int *)a2);
          return 1;
        case 0x21:
          sub_AC08F0(a1, (unsigned int *)a2);
          return 1;
        case 0x22:
          sub_AC0BF0(a1, (unsigned int *)a2);
          return 1;
        case 0x23:
          sub_AC0EF0(a1, (unsigned int *)a2);
          return 1;
        case 0x24:
          sub_AC11F0(a1, (unsigned int *)a2);
          return 1;
        case 0x25:
          sub_AC1E70(a1, (unsigned int *)a2);
          return 1;
        case 0x26:
          sub_AC1700(a1, a2);
          return 1;
        case 0x27:
          sub_AC18D0(a1, a2);
          return 1;
        case 0x28:
          sub_AC1FE0(a1, a2);
          return 1;
        case 0x2A:
          sub_ABE650(a1, (unsigned int *)a2);
          return 1;
        case 0x2B:
          sub_ABE450(a1, (unsigned int *)a2);
          return 1;
        case 0x2C:
          sub_AC14F0(a1, (unsigned int *)a2);
          return 1;
        case 0x2D:
          sub_ABF8A0(a1, (unsigned int *)a2);
          return 1;
        case 0x2E:
          sub_ABFAB0(a1, (unsigned int *)a2);
          return 1;
        case 0x2F:
          sub_ABFCC0(a1, (unsigned int *)a2);
          return 1;
        case 0x30:
          sub_AC1AB0(a1, a2);
          return 1;
        case 0x31:
          sub_AC1C90(a1, a2);
          return 1;
        case 0x32:
          sub_ABFED0(a1, (unsigned int *)a2);
          return 1;
        case 0x33:
          sub_AC00E0(a1, (unsigned int *)a2);
          return 1;
        case 0x40:
          sub_ABDBF0(a1, a2);
          return 1;
        case 0x41:
          result = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 436LL);
          if ( (_BYTE)result )
          {
            sub_AB8770(a1, (unsigned int *)a2);
            return *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 436LL);
          }
          return result;
        case 0x42:
          result = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 436LL);
          if ( (_BYTE)result )
          {
            sub_ABA0D0(a1, (unsigned int *)a2);
            return *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 436LL);
          }
          return result;
        case 0x43:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_139F3A((__int64 *)&v10, "sbv_to_int should have been removed by pre-processing", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v10);
          sub_233E40((__int64)&v10);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        default:
          break;
      }
    }
    sub_1872CE0("");
    sub_1873130(114, 955);
  }
  return 0;
}

