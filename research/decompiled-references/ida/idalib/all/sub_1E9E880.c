__int64 __fastcall sub_1E9E880(__int64 *a1, int a2, __int64 a3, double a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int *v7; // r12
  __int64 result; // rax
  unsigned int *v9; // r12
  __int64 v10; // [rsp+0h] [rbp-34h] BYREF
  int v11; // [rsp+8h] [rbp-2Ch] BYREF
  _QWORD v12[5]; // [rsp+Ch] [rbp-28h] BYREF

  v12[1] = v5;
  v12[0] = v4;
  switch ( a2 )
  {
    case 3535:
    case 3537:
    case 3539:
    case 3541:
    case 3543:
    case 3545:
    case 3547:
    case 3549:
    case 3559:
    case 3561:
    case 3563:
    case 3565:
    case 3567:
    case 3593:
    case 3595:
    case 3597:
    case 3599:
    case 3601:
    case 3604:
    case 3606:
      result = sub_16D5460(*a1, a3, 0, 0, 7, 1u, a4);
      break;
    case 3536:
    case 3538:
    case 3540:
    case 3542:
    case 3544:
    case 3546:
    case 3548:
    case 3550:
    case 3552:
    case 3554:
    case 3556:
    case 3558:
    case 3560:
    case 3562:
    case 3564:
    case 3566:
    case 3568:
    case 3570:
    case 3572:
    case 3574:
    case 3576:
    case 3578:
    case 3580:
    case 3582:
    case 3584:
    case 3586:
    case 3588:
    case 3589:
    case 3590:
    case 3591:
    case 3592:
    case 3594:
    case 3596:
    case 3598:
    case 3600:
    case 3602:
    case 3603:
    case 3605:
    case 3607:
    case 3609:
    case 3611:
    case 3613:
    case 3615:
    case 3617:
    case 3619:
      result = 0;
      break;
    case 3551:
    case 3553:
    case 3555:
    case 3569:
    case 3571:
    case 3573:
    case 3575:
    case 3577:
    case 3579:
    case 3581:
    case 3583:
    case 3585:
    case 3587:
    case 3608:
    case 3610:
    case 3612:
    case 3614:
    case 3616:
    case 3618:
      v11 = 2;
      v10 = 0x100000000LL;
      v9 = (unsigned int *)&v10;
      while ( 1 )
      {
        result = sub_16D5460(*a1, a3, *v9, 0, 7, 1u, a4);
        if ( (_BYTE)result )
          break;
        if ( v12 == (_QWORD *)++v9 )
          return sub_1E9E0C0(a1, a3, (unsigned int *)&v10, 3, a4);
      }
      break;
    case 3557:
    case 3620:
      v7 = (unsigned int *)&v10;
      v10 = 0x100000000LL;
      do
      {
        result = sub_16D5460(*a1, a3, *v7, 0, 7, 1u, a4);
        if ( (_BYTE)result )
          break;
        ++v7;
      }
      while ( v7 != (unsigned int *)&v11 );
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
