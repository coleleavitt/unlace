/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000404C0
// Address: 0x00000001000404C0

//----- (00000001000404C0) ----------------------------------------------------
__int64 __fastcall sub_1000404C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // r12
  char *v5; // r14
  char *v6; // r12
  _QWORD **v7; // rbx
  __int64 **i; // rax
  __int64 **v9; // r13
  __int64 v10; // rax
  __int64 *v11; // rsi
  _QWORD *v12; // rax
  char *v13; // rcx
  char *v14; // rax
  bool v15; // zf
  __int64 v16; // [rsp+8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-50h] BYREF
  __int64 *v18; // [rsp+18h] [rbp-48h] BYREF

  switch ( (unsigned int)sub_1000406E0(a1, a2) )
  {
    case 2u:
    case 9u:
      goto LABEL_2;
    case 3u:
      v2 = eadd(a1 + 8, a2 + 8, a1 + 8, 0);
      if ( v2 == 2 || v2 == 5 || v2 == 4 )
        return set_qerrno();
      return __stack_chk_guard;
    case 5u:
      if ( !(unsigned int)deep_copy_idcv((unsigned __int8 *)a1, a1) )
      {
        v4 = *(_QWORD **)(a2 + 8);
        v5 = (char *)*v4;
        v6 = (char *)(v4 + 1);
        if ( v5 != v6 )
        {
          v7 = *(_QWORD ***)(a1 + 8);
          for ( i = (__int64 **)sub_100043D50(v7, v7 + 1, &v17, &v16, v5 + 32);
                ;
                i = (__int64 **)sub_100043D50(v7, v7 + 1, &v17, &v16, v14 + 32) )
          {
            v9 = i;
            if ( !*i )
            {
              sub_100044010((__int64)&v18, (__int64)v7, (__int64)(v5 + 32));
              v10 = v17;
              v11 = v18;
              *(_OWORD *)v18 = 0;
              v11[2] = v10;
              *v9 = v11;
              v12 = (_QWORD *)**v7;
              if ( v12 )
              {
                *v7 = v12;
                v11 = *v9;
              }
              sub_10000C830(v7[1], v11);
              v7[2] = (_QWORD *)((char *)v7[2] + 1);
            }
            v13 = *((char **)v5 + 1);
            if ( v13 )
            {
              do
              {
                v14 = v13;
                v13 = *(char **)v13;
              }
              while ( v13 );
            }
            else
            {
              do
              {
                v14 = *((char **)v5 + 2);
                v15 = *(_QWORD *)v14 == (_QWORD)v5;
                v5 = v14;
              }
              while ( !v15 );
            }
            v5 = v14;
            if ( v14 == v6 )
              break;
          }
        }
      }
      return __stack_chk_guard;
    case 6u:
    case 8u:
      return set_qerrno();
    case 7u:
      if ( !(unsigned int)idcv_int64((unsigned __int8 *)a1) && !(unsigned int)idcv_int64((unsigned __int8 *)a2) )
LABEL_2:
        *(_QWORD *)(a1 + 8) += *(_QWORD *)(a2 + 8);
      return __stack_chk_guard;
    default:
      return __stack_chk_guard;
  }
}
